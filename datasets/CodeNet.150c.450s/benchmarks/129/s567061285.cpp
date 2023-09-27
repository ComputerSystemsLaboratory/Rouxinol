#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

void printVector(vector<vector<int> > v) {
    for (int i = 0; i < v.size(); i++ ) {
        for (int j = 0; j < v.front().size(); j++) {
            cout << v[i][j]; 
            if (j != v.front().size() - 1) {
                cout << " "; 
            }
        }
        cout << endl;
    }
}

void calcElement(vector<vector<int> > &v, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            v[i][c] += v[i][j];
            v[r][j] += v[i][j];
        }
        v[r][c] += v[i][c];
    }
}

int main(void) {
    int r;
    int c;
    cin >> r >> c;
    vector<vector<int> > table(r + 1, vector<int>(c + 1, 0));
    for (int i = 0; i < r * c; i++) {
        int row = i / c;
        int column = i - row * c;
        cin >> table[row][column];
    }
    calcElement(table, r, c);
    printVector(table);
    return 0;
}