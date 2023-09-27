#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;

bool ok(bool field[21][21]){
    for(int i=0; i<21; i++){
        for(int j=0; j<21; j++){
            if(!field[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    map<char, int> dh = {{'N',1}, {'S',-1}, {'W',0}, {'E',0}};
    map<char, int> dw = {{'N',0}, {'S',0}, {'W',-1}, {'E',1}};
    
    int N, M;
    while(cin>>N, N){
        bool field[21][21];
        memset(field, true, sizeof(field));
        
        for(int i=0; i<N; i++){
            int h, w;
            cin >> w >> h;
            field[h][w] = false;
        }
        
        int h = 10, w = 10;
        
        cin >> M;
        for(int i=0; i<M; i++){
            char c;
            int d;
            cin >> c >> d;
            for(int j=0; j<d; j++){
                h += dh[c];
                w += dw[c];
                field[h][w] = true;
            }
        }
        
        cout << (ok(field) ? "Yes" : "No") << endl;
    }
    
    return 0;
}