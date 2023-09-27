#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<vector<int>>> A(4, vector<vector<int>>(3, vector<int>(10)));
    
    for(int i = 0; i < n; i++){
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        A[b-1][f-1][r-1] += v;
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 10; k++){
                cout << " " << A[i][j][k];
            }
            cout << endl;
        }
        if(i == 3) break;
        else{
            for(int l = 0; l < 20; l++) cout << "#";
            cout << endl;
        }
    }
    
    return 0;
}