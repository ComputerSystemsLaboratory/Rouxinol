#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <fstream>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef vector<pair<int, int> > vpii;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define foreach(itr,c) for(__typeof(c.begin()) itr=c.begin(); itr!=c.end(); itr++)
#define dbg(x) cout << #x"="<< (x) << endl
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back(a) 
#define in(x) cin >> x;
#define all(x) (x).begin(), (x).end()
#define INF 2147483600
#define fi first
#define se second
using namespace std;

map <string,int> ans;
int l=0;
int k=0;

int main(){
    string str;
    string a,b;
    while(cin>>str){
        if(str.size()>=l){
            b = str;
            l=str.size();
        }
        ans[str]++;
        if(ans[str]>=k){
            k=ans[str];
            a=str;
        }
    }
    cout<<a<<" "<<b<<endl;
}