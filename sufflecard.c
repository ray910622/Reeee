#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    struct card{
        int number;
        struct card *next;
    };
    struct card *first,*new_card,*p;

    //給定牌組
    for (int i=n; i>=1; i--){
        new_card=malloc(sizeof(struct card));
        new_card->number=i;
        new_card->next=first;
        first=new_card;
    }
    p=first;
    for(int i=1;i<n;i++)
        p=p->next;
    p->next=NULL;


    for (int i=1;i<m;i++){

        printf("%d ",first->number);        //印第一張牌
        struct card *garbage;
        garbage=first;
        first=first->next;                          //移動到牌組最上方(除了印的那張)
        free(garbage);                              //丟掉第一張牌

        for(p=first;(p->next) !=NULL;p=p->next);      //讓p指到最下面那張牌
        p->next=first;                              //把最上面的牌洗下去
        first=first->next;
        p=p->next;
        p->next=NULL;
    }
    printf("%d",first->number);
    return 0;
}

