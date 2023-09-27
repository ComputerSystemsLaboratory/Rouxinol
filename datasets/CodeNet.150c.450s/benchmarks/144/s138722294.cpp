#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#define lli long long int
using namespace std;


int main(){
    int n, m, l;
    cin >> n >> m >> l;
    
    vector<vector<lli>> A(n, vector<lli>(m)), B(m, vector<lli>(l)), C(n, vector<lli>(l));
    
    for(auto &vec : A){
        for(auto &val : vec){
            cin >> val;
        }
    }
    
    for(auto &vec : B){
        for(auto &val : vec){
            cin >> val;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            cout << C[i][j];
            if(j != l-1) cout << " ";
            else cout << endl;
        }
    }
    
    return 0;
}