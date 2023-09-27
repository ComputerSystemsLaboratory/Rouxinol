#include <bits/stdc++.h>

using namespace std;

void solve();

int main() {

    solve();
    return 0;
}

void solve() {

    int n, m;
    cin >> n >> m;

    vector<vector<int> > matrix;
    vector<int> column;
    vector<int> product;

    // reading matrix
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < m; j++) {
            int valor;
            cin >> valor;
            temp.push_back(valor);
        }
        matrix.push_back(temp);
    }

    // reading column vectors
    for (int i = 0; i < m; i++) {
        int valor;
        cin >> valor;
        column.push_back(valor);
    }

    //making product
    for (int i = 0; i < n; i++) {
        int suma = 0;
        for (int j = 0; j < m; j++) {
            suma += matrix[i][j] * column[j];
        }
        product.push_back(suma);
    }

    // showing product
    for (int i = 0; i < n; i++) {
        cout << product[i] << endl;
    }   
}
