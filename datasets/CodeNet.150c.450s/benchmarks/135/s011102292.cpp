#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};

int main(){
    while(1){
        int n, m; cin>>n>>m;
        if(n == 0) return 0;
        vector<int> h(n), w(m);
        for(int i=0; i<n; i++) cin>>h[i];
        for(int i=0; i<m; i++) cin>>w[i];

        vector<int> hsum(n+10, 0), wsum(m+10, 0);
        for(int i=0; i<n; i++){
            hsum[i+1] = hsum[i] + h[i];
        }
        for(int i=0; i<m; i++){
            wsum[i+1] = wsum[i] + w[i];
        }

        map<int, int> H, W;
        for(int i=0; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                H[hsum[j] - hsum[i]]++;
            }
        }
        for(int i=0; i<=m; i++){
            for(int j=i+1; j<=m; j++){
                W[wsum[j] - wsum[i]]++;
            }
        }

        ll ans=0;
        for(auto i:H){
            ans += i.second * W[i.first];
        }

        cout << ans << endl;
    }
}
