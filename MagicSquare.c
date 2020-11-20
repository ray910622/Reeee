#include<stdio.h>

int main (){
	int n,i,j,k;
	scanf("%d",&n);
	int a[n][n];
	i=0;
	j=(n-1)/2;

	for(k=1;k<=n*n;){
		for(int x=1;x<=n;x++){
			a[i--][j++]=k++;
			if (i==-1) i+=n;
			if (j== n) j-=n; 
		}
		i+=2;
		j--;
		if (i>=n) i-=n;
		if (j==-1) j+=n;
	}

	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
