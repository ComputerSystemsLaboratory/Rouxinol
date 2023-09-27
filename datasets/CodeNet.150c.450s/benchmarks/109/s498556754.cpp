#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <utility>
#include <numeric>
#include <algorithm>
#include <functional>
#include <cctype>
#include <complex>
#include <string>
#include <sstream>

using namespace std;

#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define rep(i,n) for(int i=0;i<(n);i++)
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); \
                             it != container.end(); ++it)
#define mp(a,b) make_pair((a),(b))

typedef long long ll;
typedef complex<double> point;

// up right down left
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

const double EPS = 1e-9;
const int days[]     = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysleap[] = {31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
    while(true){
        vector<int> V(3600*24+60*60+60);
        int n;
        cin >> n;
        if(n==0) break;
        rep(i,n){
            int hh,mm,ss;
            char c;
            cin >> hh >> c >> mm >> c >> ss;
            int gh,gm,gs;
            cin >> gh >> c >> gm >> c >> gs;
            int from = 3600*hh+60*mm+ss;
            int to = 3600*gh+60*gm+gs;
            for(int s=from;s<to;s++){
                V[s] += 1;
            }
        }
        cout << *max_element(all(V)) << endl;
    }
    return 0;
}