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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    while(cin>>N>>M, N|M){
        vector<int> hs(N);
        vector<int> ws(M);
        
        for(auto &v: hs)
            cin >> v;
        for(auto &v: ws)
            cin >> v;
        
        for(int i=1; i<N; i++)
            hs[i] += hs[i-1];
        for(int i=1; i<M; i++)
            ws[i] += ws[i-1];
        
        map<int, int> hmap;
        map<int, int> wmap;
        
        for(int i=0; i<N; i++)
            for(int j=0; j<=i; j++)
                hmap[hs[i]- (i==j?0:hs[j])]++;
        for(int i=0; i<M; i++)
            for(int j=0; j<=i; j++)
                wmap[ws[i]- (i==j?0:ws[j])]++;
        
        int ans = 0;
        for(auto &it: hmap){
            ans += it.second * wmap[it.first];
        }
        
        cout << ans << endl;
                
    }
    return 0;
}