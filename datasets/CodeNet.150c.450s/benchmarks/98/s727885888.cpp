#include <map>
#include <set>
#include <list>
#include <cstdio>
#include <cmath>
#include <deque>
#include <stack>
#include <bitset>
#include <cctype>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define fr first
#define sc second
#define mp make_pair

typedef long long int64;
typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

const int INF = 2 << 28;
const double EPS = 1e-10;

int main() {
    
    int n, m;
    while(cin >> n >> m, n) {
        int sumt = 0, sumh = 0;
        vector< int > ts(n), hs(m);
        for(int i = 0; i < n; i++) {
            cin >> ts[i]; sumt += ts[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> hs[i]; sumh += hs[i];
        }
        int mint = INF, minh = INF;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(sumt - ts[i] + hs[j] == sumh - hs[j] + ts[i] && mint + minh > ts[i] + hs[j])
                    mint = ts[i], minh = hs[j];
            }
        }
        if(mint == INF) cout << -1 << endl;
        else cout << mint << " " << minh << endl;
    }
}