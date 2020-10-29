#include<stdio.h>

int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	for (;a<=b;a++){
		for (i=2;i<a;i++){
			if (a%i==0)
				break;
		}
		if (a==i)
			printf("%d ",a);

	}
	return 0;	
}
