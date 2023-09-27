#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> sheet(r + 1, vector<int>(c + 1));
    for (int i = 0; i <= r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            cin >> sheet[i][j];
            rowSum += sheet[i][j];
            if (i != r) sheet[r][j] += sheet[i][j];
        }
        
        sheet[i][c] = rowSum;
    }

    for (auto row : sheet) {
        ostringstream oss;    
        for (auto col : row) {
            if (oss.str() != "") oss << " ";
            oss << col;
        }
        
        cout << oss.str() << endl;
    }

    return 0;
}