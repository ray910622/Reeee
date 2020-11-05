#include<stdio.h>
#define N 32

int main (){
    int a[N],b[N],c[N];
    for(int k=0;k<N;k++){
        scanf("%d",&a[k]);
    }
    for(int k=0;k<N;k++){
        scanf("%d",&b[k]);
    }
    for(int k=0;k<N;k++){
        c[k]=a[k]+b[k];
    }
    for(int k=N-1;k>=0;k--){
        if(c[k]>1){
            c[k]-=2;
            c[k-1]+=1;
        }}
    for(int k=0;k<N;k++){
        printf("%d ",c[k]);
     }

    return 0;
}
