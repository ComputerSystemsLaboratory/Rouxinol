#include<iostream>
using namespace std;
int main(){
    int n, m, l;
    
    long long p;
    
    cin >> n >> m >> l;
    
    int dimA[n][m];
    int dimB[m][l];
    long long dimC[n][l];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            dimC[i][j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> dimA[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            cin >> dimB[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < l; k++){
                p = dimA[i][j] * dimB[j][k];
                dimC[i][k] += p;
                p = 0;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            cout << dimC[i][j];
            
            if((j != (l - 1))){
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
