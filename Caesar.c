#include<stdio.h>

int main(){
	int k;
	char ch;
	scanf("%d\n",&k);
	for(k%=26;(ch=getchar())!='\n';putchar(ch)){
		if(ch>='A'&&ch<='Z'){
		ch+=k;
		if(ch<'A'){
			ch+=26;}
		if(ch>'Z'){
			ch-=26;}
		}
		if(ch>='a'&&ch<='z'){
			if( (ch+k) > 'z' ){
				ch-=26;
				ch+=k;
				}
			else if( (ch+k) < 'a'){
				ch+=k;
				ch+=26;
				}
			else ch+=k;
	}}
	return 0;
}
