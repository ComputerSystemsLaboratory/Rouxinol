#include<iostream>
using namespace std;

int main(){
    
    int n, m, l;
    cin >> n >> m >> l;
    
    long long A[n][m];
    for(int i=0; i<n; i+=1){
        for(int j=0; j<m; j+=1){
            cin >> A[i][j];
        }
    }
    
    long long B[m][l];
    for(int j=0; j<m; j+=1){
        for(int k=0; k<l; k+=1){
            cin >> B[j][k];
        }
    }
    
    long long C[n][l];
    for(int i=0; i<n; i+=1){
        for(int k=0; k<l; k+=1){
            long long S=0;
            for(int j=0; j<m; j+=1){
                S = S + (A[i][j] * B[j][k]);
                
            }
            C[i][k] = S;
        }
    }
    
    for(int i=0; i<n; i+=1){
        for(int k=0; k<l; k+=1){
            if(k) cout << " ";
            cout << C[i][k];
        }
        cout << endl;
    }
    return 0;
}
