#include<stdio.h>

int R (int a,int b,int n){
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else{
        return R(a,b,n-1)+R(a,b,n-2);
    }
}

int main(){
    int a,b,n;
    for (;;){
        scanf("%d%d%d\n",&a,&b,&n);
        if (a==0 && b==0){
            return 0;
        }
        printf("%d\n",R(a,b,n));
    }
}
