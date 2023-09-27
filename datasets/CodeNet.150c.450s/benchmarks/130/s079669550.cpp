#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    int vec[m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<m; i++){
        cin >> vec[i]; 
    }
    
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += mat[i][j] * vec[j];
        }
        cout << sum << endl;
    }
    
    return 0;
}