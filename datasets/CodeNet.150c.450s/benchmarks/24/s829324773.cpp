#include <bits/stdc++.h>
#define pp pair<int, int>
using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n){
        vector<pp> v;
        int d, p;
        for(int i = 0; i < n; i++){
            cin >> d >> p;
            v.push_back(pp(p, d));
        }
        sort(v.begin(), v.end(), greater<pp>());
        int res = 0;
        for(int i = 0; i < n; i++){
            if(v[i].second <= m){
                m -= v[i].second;
            }else if(m == 0){
                res += v[i].first * v[i].second;
            }else{
                res += v[i].first * (v[i].second - m);
                m = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
