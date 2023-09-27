//貪欲法
#include <bits/stdc++.h>
using namespace std;

int main(){
        long long n, m;
        while(cin >> n >> m && n > 0 || m > 0){
                long long ans = 0;
                vector<pair<long long, long long> > pairs(n);
                for (int i = 0; i < n; i++){
                        long long p, d;
                        cin >> d >> p;
                        pairs[i] = make_pair(p, d);
                }
                sort(pairs.begin(), pairs.end(), greater<pair<long long, long long> >());
                /*for (auto x : pairs){
                        cout << x.first << " " << x.second << endl;
                }
                long long tmp = 0;
                while(1){
                        if(pairs[tmp].second <= m){
                                ans -= pairs[tmp].first * pairs[tmp].second;
                                m -= pairs[tmp].second;
                                tmp++;
                        }
                        else {
                                ans -= m * pairs[tmp].first;
                                break;
                        }
                }*/
                for (int i = 0; i < n; i++){
                       if(pairs[i].second <= m) m -= pairs[i].second;
                       else {
                               ans += pairs[i].first * (pairs[i].second - m);
                               m = 0;
                       }
                }
                cout << ans << endl;
        }
        return 0;
}

