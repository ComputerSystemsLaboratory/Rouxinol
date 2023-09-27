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
        int n; cin>>n;
        if(n == 0) return 0;

        vector<int> imos(100000, 0);
        for(int i=0; i<n; i++){
            int h1, m1, s1;
            char a1, b1;
            cin>>h1>>a1>>m1>>b1>>s1;

            int h2, m2, s2;
            char a2, b2;
            cin>>h2>>a2>>m2>>b2>>s2;

            int startTime = h1 * 3600 + m1 * 60 + s1;
            int stopTime = h2 * 3600 + m2 * 60 + s2;

            imos[startTime]++;
            imos[stopTime]--;
        }

        int ans=imos[0];
        for(int i=0; i<=90000; i++){
            imos[i+1] += imos[i];
            chmax(ans, imos[i+1]);
        }

        cout << ans << endl;
    }
}
