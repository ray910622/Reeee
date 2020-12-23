#include <stdio.h>
#define NUM 9

void check_sudoku(int (*grid_p)[NUM]);

int main(void){
    int grid[NUM][NUM]; // sudoku puzzle
    for(int i = 0; i < NUM; ++i){
        for(int j = 0; j < NUM; ++j){
            scanf("%d", &grid[i][j]);
        }
    }
    check_sudoku(grid);
    return 0;
}

int grid_bool[NUM][NUM]={0,0,0,0,0,0,0,0,0};

void check_row(int*, int, int);
void check_col(int*, int, int);
void check_block(int*, int, int);
void printout();

void check_sudoku(int (*grid_p)[NUM]){
    for (int i=0;i<NUM;i++) {
        for(int j=0;j<NUM;j++){
        check_row(*grid_p,i,j);
        check_col(*grid_p,i,j);
        check_block(*grid_p,i,j);
        }
    }
    printout();
    return;
}

void check_row(int* grid_p, int i, int j){
    int *number;
    number=grid_p+i*NUM+j;
    for (grid_p+=i*NUM; grid_p < number+(NUM-j) ;grid_p++){
        if (*grid_p == *number && grid_p != number)
            grid_bool[i][j]=1;
    }
    return;
}


void check_col(int* grid_p, int i, int j){
    int *number;
    number=grid_p+i*NUM+j;
    for (grid_p+=j ; grid_p < number+(NUM-i)*NUM ; grid_p+=NUM) {
        if (*grid_p == *number && grid_p != number)
            grid_bool[i][j] = 1;
    }
    return;
}


void check_block(int* grid_p, int i,int j){
    int *number;
    number=grid_p+i*NUM+j;
    int a=i/3,b=j/3;
    grid_p+= a*27+b*3;
    for (int r=0;r<3;grid_p+=NUM,r++){
        for (int u=0;u<3;grid_p++,u++) {
            if (*grid_p == *number && grid_p != number)
                grid_bool[i][j] = 1;
        }
        grid_p-=3;
    }
    return;
}


void printout(){
    for (int i=0 ; i<NUM ; i++){
        for(int j=0 ; j<NUM ; j++){
            if(grid_bool[i][j] == 1)
                printf("(%d,%d)\n",i,j);
        }
    }
    return;
}
