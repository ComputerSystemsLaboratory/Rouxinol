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
#define eq ==

typedef long long ll;
typedef complex<double> point;

// up right down left
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

const double EPS = 1e-9;
const int days[]     = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysleap[] = {31,29,31,30,31,30,31,31,30,31,30,31};

const int NO = 1000000000;

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0)break;
        vector<pair<pair<int,int>,int> > R;
        int m=0;
        rep(i,n){
            int a,b,c;
            cin >> a >> b >> c;
            m = max(m,max(a,b));
            R.push_back(mp(mp(a,b),c));
        }
        m++;
        vector<vector<int> > V(m,vector<int>(m,NO));

        rep(i,m){
            V[i][i] = 0;
        }

        rep(i,n){
            int a = R[i].first.first;
            int b = R[i].first.second;
            int c = R[i].second;
            V[a][b] = V[b][a] = c;
        }



        for(int k=0;k<m;k++){
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    V[i][j] = min(V[i][j],V[i][k]+V[k][j]);
                }
            }
        }

        int ret = -1;
        int mi = NO;

        for(int i=0;i<m;i++){
            int s = 0;
            for(int j=0;j<m;j++){
                s += V[i][j];
            }
            if(mi > s){
                mi = s;
                ret = i;
            }
        }
        cout << ret << " " << mi << endl;
    }
    return 0;
}