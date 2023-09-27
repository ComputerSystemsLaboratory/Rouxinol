#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n, W, a, b;
vector<int> v;
vector<int> w;
 
int memo[101][10001];
int fun(int i, int sw){
    int temp;
    if(memo[i][sw] >= 0) return memo[i][sw];
    if(i == n){
        temp = 0;
    }else if(w[i]>sw) {
        temp = fun(i+1, sw);
    }else{
        temp = max(fun(i+1, sw), fun(i+1, sw-w[i])+v[i]);
    }
    return memo[i][sw] = temp;
}
     
 
int main(){
    cin >> n >> W;
    for(int i=0; i<n; ++i){
        cin >> a >> b;
        w.push_back(b); v.push_back(a);
    }
    for(int i=0; i<n+1; ++i){
        for(int j=0; j<W+1; ++j){
            memo[i][j] = -1;
        }
    }
    cout << fun(0, W) << endl;
    return 0;
}
