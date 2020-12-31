#include <stdio.h>
#define SIZE 50

struct mat {
    int row;
    int col;
    int value[SIZE][SIZE];
};

void scan_mat(struct mat *);
void print_mat(const struct mat *);
void add_mat(const struct mat *, const struct mat *, struct mat *);
void mul_mat(const struct mat *, const struct mat *, struct mat *);

int main(void) {
    struct mat m1, m2, result;
    char op;
    scan_mat(&m1);
    scanf(" %c", &op);
    scan_mat(&m2);
    switch (op) {
        case '+':
            add_mat(&m1, &m2, &result);
            break;
        case '*':
            mul_mat(&m1, &m2, &result);
            break;
    }
    print_mat(&result);
    return 0;
}

void scan_mat(struct mat *m_p) {
    scanf("%d %d", &m_p->row, &m_p->col);
    for (int i = 0; i < m_p->row; ++i)
        for (int j = 0; j < m_p->col; ++j)
            scanf("%d", &m_p->value[i][j]);
}

void print_mat(const struct mat *m_p) {
    for (int i = 0; i < m_p->row; ++i) {
        for (int j = 0; j < m_p->col; ++j) {
            printf("%d ", m_p->value[i][j]);
            if (j == m_p->col - 1)
                printf("\n");
        }
    }
}

void add_mat(const struct mat *m1_p, const struct mat *m2_p, struct mat *result_p) {
    result_p->col = m1_p->col;
    result_p->row = m1_p->row;
    for( int i=0 ; i <result_p->row ; i++ ){
        for( int j=0 ; j < result_p->col ; j++ ){
            result_p->value[i][j] = m1_p->value[i][j] + m2_p->value[i][j];
        }
    }
    return;
}

int addition(const struct mat *m1_p, const struct  mat *m2_p , int i , int j){
    int value=0;
    for(int k=0;k<m1_p->col;k++){
        value+= (m1_p->value[i][k] * m2_p->value[k][j]);
    }
    return value;
}

void mul_mat(const struct mat *m1_p, const struct mat *m2_p, struct mat *result_p) {
    result_p->row = m1_p->row;
    result_p->col = m2_p->col;
    for( int i=0 ; i<result_p->row ; i++){
        for( int j=0 ; j<result_p->col ; j++){
            result_p->value[i][j] = addition(m1_p,m2_p,i,j);
        }
    }
    return;
}
