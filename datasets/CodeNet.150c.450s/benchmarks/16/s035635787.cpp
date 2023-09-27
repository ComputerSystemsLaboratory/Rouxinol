#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

int main() {
    stack<int> s1;
    stack<P> s2;
    int sum=0;
    char c;
    for(int i=0;cin>>c;i++) {
        if(c=='\\') {
            s1.push(i);
        }
        else if(c=='/' && s1.size()) {
            int j=s1.top(); s1.pop();
            int d = i-j;
            sum+=d;
            while(s2.size() && s2.top().fr > j) {
                d+=s2.top().sc; s2.pop();
            }
            s2.push(mp(j,d));
        }

    }
    vector<int> ans;
    while(s2.size()) ans.pb(s2.top().sc),s2.pop();
    reverse(all(ans));
    cout<<sum<<endl;
    cout<<ans.size();
    rep(i,ans.size()) cout<<(" ")<<ans[i];
    cout<<endl;
    return 0;
}