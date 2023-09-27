#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m;
    while(cin >> n >> m, n+m){
        vector<pair<int, int>> v(n);
        for(int i=0; i< n; i++) cin >> v[i].second >> v[i].first;
        sort(v.begin(), v.end());
        for(int i=v.size()-1; 0 <= i; i--){
            if(n != 0){
                long long d = min((long long)v[i].second, m);
                v[i].second -= d; m -= d;
            }
            else break;
        }
        int ret = 0;
        for(int i=0; i< n; i++) ret += v[i].second*v[i].first;
        cout << ret << endl;
    }
}