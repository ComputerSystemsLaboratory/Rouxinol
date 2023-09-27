#include <iostream>

using namespace std;

int main(void){
    
    int n;
    int m;
 
    cin >> n >> m;
 
    int A[n][m];
    int b[m];
    int c[100] = {0};
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
 
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            c[i] += A[i][j] * b[j];  
        } 
    }
 
    for(int i = 0; i < n; i++) {
 
        cout << c[i] << endl;
 
    }
 
    return 0;
    
}