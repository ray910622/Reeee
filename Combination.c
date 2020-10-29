#include <stdio.h>

int main (){
    unsigned long long int m,n,a=1,c=1;
    scanf("%lld %lld",&m,&n);
    if ((m-n) < n){
    for(int i=n+1;i<=m;i++){
        a*=i;
    }
    for(int i=(m-n);i>0;i--){
        c*=i;
    }
    }
    else{
        for (int i=m;i>(m-n);i--){
            a*=i;
        }
        for (int i=n;i>0;i--){
            c*=i;
        }
    }
    printf("%lld",a/c);
    return 0;
}
