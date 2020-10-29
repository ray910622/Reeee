#include<stdio.h>

int main(){
	int n,d,x,i;
	scanf("%d",&n);
	printf("Sun Mon Tue Wed Thu Fri Sat \n");

	switch (n){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			x=31;
			break;
		case 4: case 6: case 9: case 11:
			x=30;
			break;
		case 2:
			x=29;
			break;
	}

	switch (n){
		case 1:	case 4: case 7:
				printf("              1   2   3   4 \n");
				i=5;
				break;
		case 2: case 8:
				printf("                          1 \n");
				i=2;
				break;
		case 6: printf("      1   2   3   4   5   6 \n");
				i=7;
				break;
		case 5: printf("                      1   2 \n");
				i=3;
				break;
		case 9: case 12:
				printf("          1   2   3   4   5 \n");
				i=6;
				break;
		case 10:printf("                  1   2   3 \n");
				i=4;
				break;
		case 3: case 11:
				i=1;
				break;
	}
	
	for (int k=1;i<=x;k++){
		if (k==8){
			printf("\n");
			k=1;}
		printf("%3d ",i++);
	}
	

	return 0;
}
