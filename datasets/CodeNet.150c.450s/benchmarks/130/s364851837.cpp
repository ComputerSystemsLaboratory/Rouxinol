// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main()
{
    vector < vector <int> > a;
    vector <int> b;
    int n, m, tmp, sum;
    std::cin >> n >> m;
    a.resize(n);
    for (int i=0; i<n; i++){
        a[i].resize(m);
        for (int j=0; j<m; j++){
            std::cin >> tmp;
            a[i][j] = tmp;
        }
    }
    b.resize(m);
    for (int i=0; i<m; i++){
        std::cin >> tmp;
        b[i] = tmp;
    }
    for (int i=0; i<n; i++){
        sum = 0;
        for (int j=0; j<m; j++){
            sum += a[i][j] * b[j];
        }
        std::cout << sum << endl;
    }
    return 0;
}

