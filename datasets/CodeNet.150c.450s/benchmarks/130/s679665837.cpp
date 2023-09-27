#include <iostream>
using namespace std;

int main(void){
    int row, col;
    cin >> row >> col;
    
    int matrix[row][col];
    int colVector[col];
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }
    
    for(int i=0; i<col; i++){
        cin >> colVector[i];
    }
    
    // result
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += (matrix[i][j] * colVector[j]);
        }
        cout << sum << "\n";
    }

    return 0;
}

