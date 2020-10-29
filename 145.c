#include<stdio.h>

int main(){
	int n,a,b,c,d,e,a1=1,b1=1,c1=1,d1=1,e1=1,i;
	scanf("%d",&n);
	e=n%10;
	d=(n%100)/10;
	c=(n%1000)/100;
	b=(n%10000)/1000;
	a=n/10000;

	i=a;
	do {
		a1 *=i;
		i--;
	}while(i>0);

	if (a1!=0 && b==0)
		b1=1;
	else{
	i=b;
	do {
		b1 *=i;
		i--;
	}while(i>0);
	}
	
	if (b1!=0 && c==0)
		c1=1;
	else{
	i=c;
	do {
		c1 *=i;
		i--;
	}while(i>0);}

	if (c1!=0 && d==0)
		d1=1;
	else{
	i=d;
	do {
		d1 *=i;
		i--;
	}while(i>0);}

	if (d!=0 && e==0)
		e1=1;
	else{
	i=e;
	do {
		e1 *=i;
		i--;
	}while(i>0);}

	if(a1+b1+c1+d1+e1 == n){
		printf("%d is a strong number.",n);
	}else printf("%d is not a strong number",n);

	
	return 0;
}
