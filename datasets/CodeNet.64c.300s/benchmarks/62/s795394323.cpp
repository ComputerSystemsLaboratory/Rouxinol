#include<iostream>
using namespace std;

int main(){
    int n,m;
    int matrix[100][100];
    int rows[100];
    int result = 0;
    cin >> n >> m;
    
    for (int x = 0; x < n;x++) {
        for (int y = 0; y < m; y++){
            matrix[x][y] = 0;       
        }
    }
    
    for (int x = 0; x < m; x++) {
        rows[x] = 0;
    }
    
    for (int x = 0; x < n;x++) {
        for (int y = 0; y < m; y++){
            cin >> matrix[x][y];
        }
    }
    
    for (int x = 0; x < m; x++) {
        cin >> rows[x];
    }
    
    for (int x = 0; x < n;x++) {
        for (int y = 0; y < m; y++){
            result += matrix[x][y] * rows[y];
        }
        cout << result << endl;
        result = 0;
    }
    
    
    
   
    return 0;
}