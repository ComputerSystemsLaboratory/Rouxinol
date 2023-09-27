#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long>> matrix;

void read_matrix(matrix &a, int n, int m);
void matrix_mult(matrix &a, matrix &b, matrix &c);
void print_matrix(matrix &a);

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    matrix a, b, c;

    read_matrix(a, n, m);
    read_matrix(b, m, l);
    matrix_mult(a, b, c);
    print_matrix(c);
}

void read_matrix(matrix &a, int n, int m){
    for(int row=0; row!=n; ++row){
        vector<long> vec;
        a.push_back(vec);
        for(int col=0; col!=m; ++col){
            int i;
            cin >> i;
            a[row].push_back(i);
        }
    }
}

void matrix_mult(matrix &a, matrix &b, matrix &c){
    auto n = a.size();
    auto m = a[0].size();
    auto l = b[0].size();
    for(int col=0; col!=n; ++col){
        vector<long> vec;
        c.push_back(vec);
        for(int row=0; row!=l; ++row){
            c[col].push_back(0);
            for(int i=0; i!=m; ++i){
                c[col][row] += a[col][i] *b[i][row];
            }
        }
    }
}

void print_matrix(matrix &a){
    for(auto row: a){
        auto n = row.size();
        int i = 0;
        for(auto aij:row){
            cout << aij;
            if(++i!=n) cout << ' ';
        }
        cout << endl;
    }
}