#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int addition(char str[]);

int main() {
    char str[N];
    scanf("%s", str);
    int sum = addition(str);
    printf("%d", sum);
    return 0;
}

int addition(char str[]){
    int sum=0;
    int a[N];
    char *tem;
    tem=strtok(str,"+");
    a[0]=atoi(tem);
    sum+=a[0];
    for(int i=1; tem=strtok(NULL,"+")  ;i++){
        a[i]= atoi(tem);
        sum+=a[i];
    }
    return sum;
}
