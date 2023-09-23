#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> n >> m;
    int A[n][m];
    int B[m];
    int answer;
    
    for(int i = 0; i < n; i++){ //A行列に値を入れる
        for(int j=0 ; j < m; j++){
            cin >> a;
            A[i][j] = a;
        }
    }
    
    for(int k = 0; k < m; k++){//ｂ行列に要素を入れている。
        cin >> b;
        B[k] = b;
    }
    
    
    for(int l = 0; l < n; l++){
        
        for(int p = 0; p< m ; p++){
            answer += A[l][p] * B[p];
        }
        cout << answer << endl;
        answer = 0;
    }
    
    
    return 0;
}
