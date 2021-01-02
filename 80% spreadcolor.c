#include <stdio.h>
#define M 5
#define N 8
char colors[4] = {'R', 'G', 'B', 'X'};   // Red, Green, Blue, Empty

void spread(char*, int, int);

int main(void) {
    char graph[M][N];
    int row, col;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            scanf("%c", &graph[i][j]);
        getchar();      // Ignore '\n'
    }
    scanf("%d %d", &row, &col);    // Starting position

    spread(&graph[0][0], row, col);

    // Print out the spreading result
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++)
            printf("%c", graph[i][j]);
        printf("\n");
    }
    return 0;
}

void up (char*, int, int, char*);
void down (char*, int, int, char*);
void left (char*, int, int, char*);
void right (char*, int, int, char*);

void spread(char* graph, int row,  int col){
    char *p=graph;
    p+=row*N+col;
    up(graph, row, col, p);
    down(graph, row, col, p);
    left(graph, row, col, p);
    right(graph, row, col, p);
}


void up(char* graph, int row, int col, char* p){
    char RGB=*p;
    for (int i=row ; i>=0 ; p-=N, i-- ){
        if (*p==RGB || *p==colors[3])
            *p=RGB;
        else break;
    }
}

void down(char* graph, int row, int col, char* p){
    char RGB=*p;
    for (int i=row ; i<=M ; p+=N, i++){
        if (*p==RGB || *p==colors[3])
            *p=RGB;
        else break;
    }
}

void left(char* graph, int row, int col, char* p){
    char RGB=*p;
    for(int i=col; i>=0 ; p--, i--){
        if (*p==RGB || *p==colors[3])
            *p=RGB;
        else break;
    }
}

void right(char* graph, int row, int col, char* p){
    char RGB=*p;
    for(int i=col; i<=N; p++,i++){
        if (*p==RGB || *p==colors[3])
            *p=RGB;
        else break;
    }
}
