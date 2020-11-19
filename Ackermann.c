#include<stdio.h>

int A(int n,int m){
    int a;
    if (n==0){
        a=m+1;
    }
    else if(m==0){
        a=A(n-1,1);
    }
    else {
        a=A(n-1,A(n,m-1));
    }
    return a;
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",A(n,m));

    return 0;
}
