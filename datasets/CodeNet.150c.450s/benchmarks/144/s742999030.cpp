#include<iostream>
using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    int arr1[100][100], arr2[100][100];
    long res[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr1[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<l; j++){
            cin >> arr2[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            for(int k=0; k<m ;k++){
                if(k==0){
                    res[i][j] = arr1[i][k] * arr2[k][j];
                }else{
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
                
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int k = 0; k < l - 1; k++){
            cout << res[i][k] << " ";
        }
        cout << res[i][l - 1] << endl;
    }
    
    return 0;
}