#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

signed main(){
    int n, m;
    while(1){
        cin >> n >> m;
        if(n + m == 0) break;
        vector<pair<int, int> > data;
        int d, p, sum = 0;
        rep(i, 0, n){
            cin >> d >> p;
            sum += d*p;
            data.push_back(make_pair(p, d));
        }
        sort(all(data));
        reverse(all(data));
        rep(i, 0, n){
            if(m - data[i].second >= 0){
                sum -= data[i]. second * data[i]. first;
                m -= data[i].second;
            }else{
                sum -= m * data[i]. first;
                break;
            }
        }
        cout << sum << endl;
    }
}