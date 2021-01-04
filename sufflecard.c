#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;                                  //n張牌,抽m次
    scanf("%d %d",&n,&m);
    struct card{                              //牌組list
        int number;
        struct card *next;
    };
    struct card *first,*new_card,*p;

    //給定牌組從底部開始往上放
    for (int i=n; i>=1; i--){
        new_card=malloc(sizeof(struct card));
        new_card->number=i;
        new_card->next=first;
        first=new_card;
    }

    //讓最底下的牌的next指向NULL
    p=first;
    for(int i=1;i<n;i++)
        p=p->next;
    p->next=NULL;


    //開始抽牌 重複m-1次 避免剩一張牌時的next直接是NULL 結束迴圈
    for (int i=1;i<m;i++){

        printf("%d ",first->number);        //印第一張牌
        struct card *garbage;                       //釋放空間用的佔存指標
        garbage=first;
        first=first->next;                          //移動到牌組第二張
        free(garbage);                              //丟掉第一張牌(上一張變成第一張)

        for(p=first;(p->next) !=NULL;p=p->next);      //讓p指到最下面那張牌
        p->next=first;                              //最下面的牌指到第一張 也就是把第一張洗到最下面
        first=first->next;                            //first跑到第二張
        p=p->next;                                      //把p指到最下面那張
        p->next=NULL;                                   //讓最後一張的next=NULL
    }
    printf("%d",first->number);                //印最後一張牌
    return 0;
}
