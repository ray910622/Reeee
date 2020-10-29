#include <stdio.h>

int main (){
    char j;
    for (int i=1;i<=20;i++){
        scanf("%c",&j);

        switch (j){
            case 65:
                printf("C");
                break;
            case 66:
                printf ("R");
                break;
            case 67:
                printf ("W");
                break;
            case 68:
                printf ("Z");
                break;
            case 69:
                printf ("G");
                break;
        }
    }
    return 0;
}
