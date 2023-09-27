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
    vector<int> v(201);
    for(int i=1; i<=200; i++){
        v[i] = i * (i + 1) * (i + 2) / 6;
    }

    vector<int> dp1(1000010, 1e9);
    dp1[0] = 0;
    auto dp2 = dp1;

    for(int i=1; i<=200; i++){
        for(int j=0; j<=1000005; j++){
            if(j - v[i] >= 0) dp1[j] = min(dp1[j], dp1[j-v[i]] + 1);

            if(v[i] % 2){
                if(j - v[i] >= 0) dp2[j] = min(dp2[j], dp2[j-v[i]] + 1);
            }
        }
    }

    while(1){
        int n; cin>>n;
        if(n == 0) return 0;

        cout << dp1[n] << " " << dp2[n] << endl;
    }
}
