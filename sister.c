#include<stdio.h>
#define N 10

int main(){
    int a[N],noise,maxnoise=0;
    for(int k=0;k<10;k++){
        scanf("%d",&a[k]);
    }
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            noise=(a[i]+a[j])*(i-j);
            if (noise<0) noise*=(-1);
            if (noise>maxnoise) maxnoise=noise;
        }
    }
    printf("%d",maxnoise);

    return 0;
}
