#include <iostream>
#include <vector>
using namespace std;

typedef struct {
    int row;
    int col;
    vector<vector<long>> val;
} matrix;

void init_matrix(matrix &mat, int nrow, int ncol);
void read_matrix(matrix &mat);
void matrix_mult(const matrix &mat_a, const matrix &mat_b, matrix &mat_c);
void print_matrix(const matrix &mat);

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    matrix a, b, c;

    init_matrix(a, n, m);
    init_matrix(b, m, l);
    init_matrix(c, n, l);

    read_matrix(a);
    read_matrix(b);
    matrix_mult(a, b, c);
    print_matrix(c);
}


void init_matrix(matrix &mat, int nrow, int ncol){
    mat.row = nrow;
    mat.col = ncol;
    mat.val.resize(nrow);
    for(auto &vec: mat.val){
        vec.resize(ncol, 0);
    }
}

void read_matrix(matrix &mat){
    for(int row=0; row!=mat.row; ++row){
        for(int col=0; col!=mat.col; ++col){
            cin >> mat.val[row][col];
        }
    }
}

void matrix_mult(const matrix &a, const matrix &b, matrix &c){
    auto n = a.row;
    auto m = a.col;
    auto l = b.col;
    for(int col=0; col!=n; ++col){
        for(int row=0; row!=l; ++row){
            for(int i=0; i!=m; ++i){
                c.val[col][row] += a.val[col][i] *b.val[i][row];
            }
        }
    }
}

void print_matrix(const matrix &mat){
    for(const auto &row: mat.val){
        int i = 0;
        for(const auto &aij:row){
            cout << aij;
            if(++i != mat.col) cout << ' ';
        }
        cout << endl;
    }
}