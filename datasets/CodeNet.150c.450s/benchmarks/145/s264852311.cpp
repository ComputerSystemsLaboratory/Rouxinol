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

map<int,string> map1;
map<string,int> map2;
int main() {
    string s;
    while(cin>>s) {
        map1[-s.size()]=s;
        map2[s]++;
    }

    auto it = map2.begin();
    int maxi=0;
    string ans;
    while(it!=map2.end()) {
        if(maxi<it->sc) {
            maxi = it->sc;
            ans=it->fr;
        }
        it++;

    }
    cout<<ans<<" ";
    cout<<(map1.begin()->sc)<<endl;

    return 0;
}