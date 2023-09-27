#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

typedef double real;

struct matrix {
    real * a;
    long ld;		      // leading dimension
    long n_rows;		      // number of rows
    long n_cols;		      // number of columns

    matrix() {}
    matrix(long n_rows, long n_cols, long ld, real * a) {
        init(n_rows,  n_cols, ld, a);
    }
    matrix(long n_rows, long n_cols, long ld) {
        init(n_rows,  n_cols, ld);
    }
    matrix(long n_rows, long n_cols) {
        init(n_rows,  n_cols);
    }

    void init(long n_rows_, long n_cols_, long ld_, real * a_) {
        n_rows = n_rows_;
        n_cols = n_cols_;
        ld = ld_;
        a = a_;
    }

    void init(long n_rows, long n_cols, long ld) {
        real * a = new real[n_rows * ld];
        init(n_rows, n_cols, ld, a);
    }
  
    void init(long n_rows, long n_cols) {
        init(n_rows, n_cols, n_cols);
    }

    real & operator ()(long i, long j) {
        return a[i * ld + j];
    }
};

void print_matrix(matrix A) {
    long M = A.n_rows;
    long N = A.n_cols;
    long i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            //printf("%.2f ", A(i, j));
            printf("%d ", (int)A(i,j));
        }
        printf("\n");
    }
}

void mm(matrix &A, matrix &B, matrix &C){
    if( A.n_cols != B.n_rows ||
        A.n_rows != C.n_rows ||
        B.n_cols != C.n_cols ){
        cout << "Error: Uncomputable matrix size. \n";
        exit(1);
    }

    for(int i=0; i<A.n_rows; i++){
        for(int j=0; j<B.n_cols; j++){
            real ct = 0.0;
            for(int k=0; k<A.n_cols; k++){
                ct += A(i,k) * B(k,j);
            }
            C(i,j) = ct;
        }
    }
}

int main(){
    int n, m;
    int input;
    cin >> n >> m;
    matrix A(n, m);
    matrix b(m, 1);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> input;
            A(i, j) = input;
        }
    }
    for(int i=0; i<m; i++){
        cin >> input;
        b(i, 0) = input;
    }

    //print_matrix(A);
    //print_matrix(b);
    
    matrix C(n, 1);

    mm(A,b,C);

    for(int i=0; i<n; i++){
        printf("%d\n", (int)C(i,0));
    }
    
    return 0;
}
    