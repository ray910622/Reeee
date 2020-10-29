#include<stdio.h>

int main(){
	int hp1,hp2,a;
	scanf("%d %d",&hp1,&hp2);
	for(;hp1>0 && hp2>0;){
		scanf("%d",&a);
		hp2-=a;
		scanf("%d",&a);
		hp1-=a;
		}
	if (hp1<hp2)
		printf("B");
	else printf("A");
	return 0;
}
