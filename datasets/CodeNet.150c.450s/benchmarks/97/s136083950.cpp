#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;
using ui64 = unsigned long long int;

////////////////////////////////

int main()
{
    using pii = pair<int,int>;
    #define mp make_pair
    int n;
    map< int,pair<int,int> > p;
    while(cin >> n,n){
        p.clear();
        p[0] = mp(0,0);
        for(int i=1;i<n;i++){
            int u,v;
            cin >> u >> v;
            if(v == 0){
                p[i] = mp(p[u].first - 1, p[u].second);
            }else if (v == 1){
                p[i] = mp(p[u].first, p[u].second - 1);
            }else if (v == 2){
                p[i] = mp(p[u].first + 1, p[u].second);
            }else if (v == 3){
                p[i] = mp(p[u].first, p[u].second + 1);
            }
        }
        int si = 0 ,sj = 0,ti = 0,tj = 0;
        for(auto&& x:p){
            si = min(si, x.second.first);
            sj = min(sj, x.second.second);
            ti = max(ti, x.second.first);
            tj = max(tj, x.second.second);
        }
        cout << (ti-si+1) << " " << (tj-sj+1) << endl;
    }
}


