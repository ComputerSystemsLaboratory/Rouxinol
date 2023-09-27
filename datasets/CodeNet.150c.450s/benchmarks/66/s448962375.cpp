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
    int N;
    cin >> N;
    map<string,bool> U;
    rep(i,N){
        string u;
        cin >> u;
        U[u] = true;
    }
    int M;
    cin >> M;
    vector<string> T(M);
    rep(i,M) cin >> T[i];
    bool open = false;
    rep(i,M){
        string s = T[i];
        if(U.find(s) != U.end()){
            if(open){
                cout << "Closed by " << s << endl;
            }else{
                cout << "Opened by " << s << endl;
            }
            open = !open;
        }else{
            cout << "Unknown " << s << endl;
        }
    }
    return 0;
}