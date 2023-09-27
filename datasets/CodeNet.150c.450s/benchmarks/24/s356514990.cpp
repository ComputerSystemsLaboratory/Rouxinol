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
#define rep(i,n) for(unsigned int i=0;i<(n);i++)
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); \
                                                  it != container.end(); ++it)
#define mp(a,b) make_pair((a),(b))

typedef long long ll;
typedef complex<double> P;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};
const double EPS = 1e-9;
const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysleap[] = {31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
    while(true){
        int N,M;
        cin >> N >> M;
        if(N==0) break;
        vector<pair<int,int> > V;
        rep(i,N){
            int D,P;
            cin >> D >> P;
            V.push_back(mp(P,D));
        }
        sort(rall(V));
        int ret = 0;
        rep(i,N){
            int mi = min(M,V[i].second);
            M -= mi;
            ret += V[i].first * (V[i].second-mi);
        }
        cout << ret << endl;
    }
    return 0;
}