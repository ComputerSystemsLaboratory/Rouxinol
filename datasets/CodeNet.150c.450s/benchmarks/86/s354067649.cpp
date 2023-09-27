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

typedef long long ll;
typedef complex<double> P;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};
const double EPS = 1e-9;
const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysleap[] = {31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
    while(true){
        int N,M,P;
        cin >> N >> M >> P;
        if(N==0) break;
        vector<int> X(N);
        rep(i,N) cin >> X[i];
        int total = accumulate(all(X),0);
        int rest = total * (100-P);

        int ret;
        if(X[M-1] == 0) ret = 0;
        else ret = rest / X[M-1];
        if(X[M-1] == 0) ret = 0;
        cout << ret << endl;
    }
    return 0;
}