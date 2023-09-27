#include <iostream>
using namespace std;

int main(void){
    int n,m,l;
    cin >> n >> m >> l;
    int a[n][m];
    int b[m][l];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> b[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            long d = 0;
            for(int k=0;k<m;k++){
                d+=a[i][k]*b[k][j];
            }
            cout << d;
            if(j==l-1){
                cout << endl;  
            }else{
                cout << " ";
            }
            
        }
    }
    
    return 0;
}

