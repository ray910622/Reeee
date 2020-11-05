#include<stdio.h>

int main(){
    int n,i,j,z;
    scanf("%d",&n);
    int a[n][n];
    for (i=0;i<n;i++){
        scanf("\n");
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]) z+=1;
        }
    }
    if (z>0) printf("No\n");
    else printf("Yes\n");
    return 0;
}
