#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    while(cin >> n && n) {

        vector<string> v;

        vector<pair<string,string> > res;
        rep(i,n) {
            string s,t;
            cin >> s >> t;
            res.push_back(make_pair(s,t));
        }
        sort(res.begin(),res.end());
        
        v.push_back(res[0].second);

        REP(i,1,n) {
            string s = res[i].first;
            string t = res[i].second;

            bool flag = true;

            rep(j,v.size()) {
                if(v[j] <= s) {
                    v[j] = t;
                    flag = false;
                    break;
                }
            }

            if(flag) v.push_back(t);
        }

        cout << v.size() << endl;
    }

    return 0;
}