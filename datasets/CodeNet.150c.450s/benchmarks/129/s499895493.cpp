#include <iostream>
using namespace std;
int main() {
    int r, c, n;
    cin >> r >> c;
    int A[r+1][c+1];
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> n;
            A[i][j] = n;
        }
    }
    
    for(int i = 0; i < r; i++){
        int count = 0;
        for(int j = 0; j < c; j++){
            count += A[i][j];
        }
        A[i][c] = count;
    }
    
    
    for(int i = 0; i < c+1; i++){
        int count = 0;
        for(int j = 0; j < r; j++){
            count += A[j][i];
        }
        A[r][i] = count;
    }
    for(int i = 0; i < r+1; i++){
        for(int j = 0; j < c+1; j++){
            if(j == c){
                cout << A[i][j];
            }
            else{
                cout << A[i][j] << ' ';
            }
        }
        cout << endl;
        
    }
    
    return 0;
}

