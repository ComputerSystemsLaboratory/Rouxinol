#include<iostream>
using namespace std;

int main(){
    
    int n,m,i,j;
    cin >> n >> m;//縦横
    
    int A[n][m];
    for(int i=0; i<n; i+=1){
        for(int j=0; j<m; j+=1){
            int x;
            cin >> x;
            A[i][j] = x;
        }
    }
    
    int b[m];
    for(int j=0; j<m; j+=1){
        int y;
        cin >> y;
        b[j] = y;
    }
    
    int c[n];
    for(int i=0; i<n; i+=1){
        c[i] = 0;
        for(int j=0; j<m; j+=1){
            c[i] = (c[i] + A[i][j] * b[j]);
        }
        cout << c[i] << endl;
    }
    return 0;
}
