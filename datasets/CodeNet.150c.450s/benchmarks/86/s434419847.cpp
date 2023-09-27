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


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int n, m, p;
    while(cin >> n >> m >> p, n|m|p){
        vector<int> vec(n);
        int sum = 0;
        for(auto &v: vec){
            cin >> v;
            sum += v;
        }
        int v = vec[--m];
        cout << (v ? (100-p)*sum/v : 0) << endl;
    }
    return 0;
}