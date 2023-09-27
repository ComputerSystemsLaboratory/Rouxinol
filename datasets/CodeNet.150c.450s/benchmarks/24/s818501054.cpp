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
    int N, M;
    while(cin>>N>>M, N|M){
        vector<pair<int, int>> d(N);
        for(int i=0; i<N; i++)
            cin >> d[i].second >> d[i].first;
        sort(d.rbegin(), d.rend());
        
        int sum = 0;
        for(int i=0; i<N; i++){
            int x = min(M, d[i].second);
            M -= x;
            sum += d[i].first * (d[i].second-x);
        }
        cout << sum << endl;
    }
    return 0;
}