#include<stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    char a[n];
    for(int k=0;k<n;k++){
        a[k]=getchar();
    }
    for(int k=n-1;k>=0;k--){
        putchar(a[k]);
    }
    return 0;
}
