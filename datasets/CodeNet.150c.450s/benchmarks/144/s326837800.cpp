#include<iostream>
using namespace std;
int main() {
    
    int n,m,l;
    
    cin >> n >> m >> l;
    
    int A[100][100] = {{0}};
    int B[100][100] = {{0}};
    long long C[100][100] = {{0}};
    
    for (int i = 0; i < n; i ++) {
        
        for (int j = 0; j < m; j ++) {
            
            cin >> A[i][j];
            
        }
    }
    
    for (int i = 0; i < m; i ++) {
        
        for (int j = 0; j < l; j ++) {
            
            cin >> B[i][j];
            
        }
    }
    
    for (int i = 0; i < n; i ++) {
        
        for (int j = 0; j < m; j ++) {
            
            for (int k = 0; k < l; k ++) {
                
                C[i][k] += A[i][j] * B[j][k];
                
                
            }
            
        }
    }
    
    for (int i = 0; i < n; i ++) {
        
        for (int j = 0; j < l; j ++) {
            
            if (j == l-1) {
                
                cout << C[i][j] << endl;
                
            } else {
                
                cout << C[i][j] << ' ';
            
            }
            
            
        }
    }
    
    
    
    return 0;
    
    
}
