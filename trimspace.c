#include <stdio.h>

int main(){
	char i=1,k=1;
	scanf("%c",&i);
	for(;i!=10;){
		if(i!=32){
			printf("%c",i);
		}
		else if (k!=32){
			printf("%c",i);
		}
		k=i;
		scanf("%c",&i);
	}

	return 0;
}
