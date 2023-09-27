#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n,m,l,a,b; //n*mの行列がA、m*lの行列がB
    cin >> n >> m >> l;
    int A[n][m];
    int B[m][l];
    
    for(int i = 0; i<n;i++){  //Aに要素を入れる
        
        for(int j = 0;j < m;j++){
            cin >> a;
            A[i][j] = a;
            
        }
    }
    
    for(int k = 0; k < m;k++){   //Bに要素を入れる。
        for(int x = 0;x<l; x++){
            cin >> b;
            B[k][x] = b;
        }
    }
    
    for(int i = 0;i<n; i++){
        for(int j = 0; j < l; j++){
            long long c = 0;
            for(int k = 0; k < m;k++){
                c += A[i][k] * B[k][j];
                //cout << c << " ";
            
            }
            if(j == 0) cout << c;
            else cout << " " << c;
            //cout << endl;
            
        }
        cout << endl;
    }
    
}
