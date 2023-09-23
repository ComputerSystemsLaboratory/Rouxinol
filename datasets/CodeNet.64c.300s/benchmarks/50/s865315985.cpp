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

int n;
int a[102];

int bubble_sort() {
    int res=0;
    for(int i=0;i<n;i++) {
        for(int j=n-1;j>=i+1;j--) {
            if(a[j]<a[j-1]) swap(a[j-1],a[j]),res++;
        }
    }
    return res;

}

int main() {
    cin>>n;
    rep(i,n) cin>>a[i];
    int ans = bubble_sort();
    rep(i,n) cout<<(i==0?"":" ")<<a[i];
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}