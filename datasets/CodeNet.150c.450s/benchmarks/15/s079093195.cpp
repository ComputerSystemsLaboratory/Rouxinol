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
bool search(int *a,int n,int x) {
    int i=0;
    a[n]=x;
    while(a[i]!=x) i++;
    return i!=n;

}
int n;
int q;
int S[10004];


int main() {
    cin>>n;
    rep(i,n) cin>>S[i];
    cin>>q;
    int ans=0;
    rep(i,q) {
        int t;
        cin>>t;
        if(search(S,n,t)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}