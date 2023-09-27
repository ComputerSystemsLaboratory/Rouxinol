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
const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
const double EPS = 1e-9;
const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysleap[] = {31,29,31,30,31,30,31,31,30,31,30,31};

const int dx2[] = {1,1,1,0,0,0,-1,-1,-1};
const int dy2[] = {1,0,-1,1,0,-1,1,0,-1};

int main(){
    while(true){
        const int FL = 500;
        int N;
        cin >> N;
        if(N==0) break;
        if(N==1){
            cout << 1 << " " << 1 << endl;
            continue;
        }
        vector<pair<int,int> > PS;
        PS.push_back(mp(250,250));
        for(int i=1;i<N;i++){
            int n,d;
            cin >> n >> d;
            pair<int,int> p = PS[n];
            p.first += dy[d];p.second += dx[d];
            PS.push_back(p);
        }
        int low = 250,high = 250;
        int le = 250, ri = 250;
        for(int i=0;i<PS.size();i++){
            int y = PS[i].first,x = PS[i].second;
            high = max(high,y);
            low = min(low,y);
            ri = max(ri,x);
            le = min(le,x);
        }
        cout << (ri-le+1) << " "  <<(high-low+1) << endl;

    }
    return 0;
}