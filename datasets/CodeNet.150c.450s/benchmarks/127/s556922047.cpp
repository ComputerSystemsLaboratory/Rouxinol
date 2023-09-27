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

set<string> S;
int n;

void solve(string s) {
    S.clear();
    S.insert(s);
    rep(i,s.size()) {
        if(i==0) continue;
        string temp1 = s.substr(0,i);
        string temp2 = s.substr(i,s.size()-i);
        S.insert(temp1+temp2);
        S.insert(temp2+temp1);
        reverse(all(temp1));
        S.insert(temp1+temp2);
        S.insert(temp2+temp1);

        reverse(all(temp2));
        S.insert(temp1+temp2);
        S.insert(temp2+temp1);

        reverse(all(temp1));
        S.insert(temp1+temp2);
        S.insert(temp2+temp1);
    }

    cout<<S.size()<<endl;

}

int main() {
    cin>>n;
    string s;
    rep(i,n) {
        cin>>s;
        solve(s);
    }

    return 0;
}