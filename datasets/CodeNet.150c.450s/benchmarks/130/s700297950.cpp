#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> A(n, vector<int>(m));
    vector<int> b(m), ans(n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ans[i] += A[i][j] * b[j];
        }
    }
    
    for(auto val : ans){
        cout << val << endl;
    }
    
    return 0;
}