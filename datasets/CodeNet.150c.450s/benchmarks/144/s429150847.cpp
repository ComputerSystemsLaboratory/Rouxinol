#include <iostream>

using namespace std;

int main(){
    long A[100][100];
    long B[100][100];
    long C[100][100];
    long sum;
    int n,m,l;
    int i,j,k;
    
    for(i = 0;i < 100;i++){
        for(j = 0;j < 100;j++){
            A[i][j] = 0;
            B[i][j] = 0;
            C[i][j] = 0;
        }
    }
    
    cin >> n >> m >> l;
    
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> A[i][j];
        }
    }
    
    for(i = 0;i < m;i++){
        for(j = 0;j < l;j++){
            cin >> B[i][j];
        }
    }
    
    for(i = 0;i < n;i++){
        for(k = 0;k < l;k++){
            sum = 0;
            for(j = 0;j < m;j++){
                sum = sum + A[i][j] * B[j][k];
            }
            C[i][k] = sum;
        }
    }
    
    for(i = 0;i < n;i++){
        for(k = 0;k < l;k++){
            if(k == l - 1){
                cout << C[i][k];
            }else{
                cout << C[i][k] << ' ';
            }
        }
        cout << endl;
    }
    
    return 0;
}
