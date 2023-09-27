#include<iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int mat[r+1][c+1];
    for(int i=0; i<r+1; i++){
        for(int j=0; j<c+1; j++){
            if(i==r){
                mat[i][j] = 0;
            }else if(j==c){
                mat[i][j] = 0;
            }else{
                cin >> mat[i][j];
            }
            
        }
    }
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            mat[r][j] += mat[i][j];
            mat[i][c] += mat[i][j];
            
        }
    }
    for(int i=0; i<c; i++){
        mat[r][c] += mat[r][i];
    }
    
    for(int i=0; i<r+1; i++){
        for(int j=0; j<c+1; j++){
            
            if(j==c){
                cout << mat[i][j];
            }else{
                cout << mat[i][j] << ' ';
            }
        }
        cout << endl;
    }
    
    return 0;
}