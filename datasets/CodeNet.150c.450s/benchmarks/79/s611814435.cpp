#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main() {
    int n,r;
    while(cin >> n >> r) {
        if(n == 0 && r == 0) break;
        vector<int> v(n);
        rep(i,n) v[i] = n-i;
        
        rep(i,r) {
            int p,c;
            cin >> p >> c;

            vector<int> ret;
            REP(j,p-1,p-1+c) {
                ret.push_back(v[j]);
            }

            rep(j,p-1) {
                ret.push_back(v[j]);
            }

            REP(j,p-1+c,n) {
                ret.push_back(v[j]);
            }

            rep(j,n) v[j] = ret[j];
        }

        cout << v[0] << endl;
    }
    return 0;
}