//
//  DPL_1_B.cpp
//  
//
//  Created by ?±±?´? ??? on 2015/08/29.
//
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calc(int, int);

vector<int> v, w;
int N;
vector< vector<int> > memo;

int main(){
    int W;
    
    cin >> N >> W;
    
    v.resize(N);
    w.resize(N);
    memo.resize(N + 1, vector<int>(10001));
    
    for(int i = 0; i < N + 1; i++){
        for(int j = 0; j < 10001; j++){
            memo[i][j] = -1;
        }
    }
    
    for(int i = 0; i < N; i++){
        cin >> v[i] >> w[i];
    }
    
    cout << calc(0, W) << endl;
    
    return 0;
}

int calc(int i, int j){
    if(memo[i][j] != -1){
        return memo[i][j];
    }
    
    int res;
    
    if(i > N - 1){
        res = 0;
    }else if(j < w[i]){
        res = calc(i + 1, j);
    }else{
        res = (int)max(calc(i + 1, j), calc(i + 1, j - w[i]) + v[i]);
    }
    
    memo[i][j] = res;
    return res;
}