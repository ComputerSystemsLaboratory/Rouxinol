#include<iostream>
using namespace std;

int main(){
    int r, c, L[101][101];
    cin >> r >> c;
    
    
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> L[i][j];
        }
    }
    
    for(int i=0; i<= r; i++){
        L[i][c] =0;
    }
    for(int j=0; j<= c; j++){
        L[r][j] =0;
    }
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            L[i][c]+=L[i][j];
            L[r][j]+=L[i][j];
            L[r][c]+=L[i][j];
        }
    }
    
    for(int i=0;i<=r; i++){
        for(int j=0; j<=c; j++){
            
            if(j){
                cout << " ";
            }
            cout << L[i][j] ;
        }
        cout << endl;
    }
    return 0;
}
