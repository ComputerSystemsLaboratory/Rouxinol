#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <climits>
using namespace std;

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define RREP(i,n) for(int i=(int)n-1; i>=0; i--)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define RFOR(i,c) for(__typeof((c).rbegin())i=(c).rbegin();i!=(c).rend();++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int> > pipii;
typedef vector<int> vi;

const int INF = 1e9;
const int MOD = 1e9+7;
const double EPS = 1e-9;
int main(void){
    double x, y, s;
    while(cin >> x >> y >> s, x){
        int ans = 0;
        for(int i = 1; i < 1000; i++){
            for(int j = 1; j < 1000; j++){
                int b = (double)i * (100.0 + x) / 100;
                b += (int)((double)j * (100.0 + x) / 100);
                if(b == s){
                    int a = (double)i * (100.0 + y) / 100;
                    a += (int)((double)j * (100.0 + y) / 100);
                    ans = max(ans, a);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}