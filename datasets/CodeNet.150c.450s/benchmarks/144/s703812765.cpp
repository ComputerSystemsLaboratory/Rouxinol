// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    int n, m, l;
    long p;
    vector < vector<int> > a, b;
    std::cin >> n >> m >> l;
    a.resize(n);
    b.resize(m);
    for (int i=0; i<n; ++i){
        a[i].resize(m);
    }
    for (int i=0; i<m; ++i){
        b[i].resize(l);
    }
    // input matrix A
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            std::cin >> a[i][j];
        }
    }
    // input matrix B
    for (int i=0; i<m; ++i){
        for (int j=0; j<l; ++j){
            std::cin >> b[i][j];
        }
    }
    
    for (int i=0; i<n; ++i){
        for (int j=0; j<l; ++j){
            p = 0;
            for (int k=0; k<m; ++k){
                p += a[i][k] * b[k][j];
            }
            if (j == l-1){
                std::cout << p << endl;
            }
            else {
                std::cout << p << " ";
            }
        }
    }
    return 0;
}

