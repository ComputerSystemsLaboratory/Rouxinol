#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int column[m];
    int matrix[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)cin >> matrix[i][j];
    }

    for(int i = 0; i < m; i++)cin >> column[i];
    
    for(int i = 0; i < n; i++){
        int temp = 0;
        for(int j = 0; j < m; j++){
            temp += column[j] * matrix[i][j];
        }
        cout << temp << endl;
    }

    return 0;
}