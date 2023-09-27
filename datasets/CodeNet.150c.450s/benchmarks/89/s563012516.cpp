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

const int M = 1e6+10;
bool isPrime[M] = {false};

void seive(){
    bool found[M] = {false};
    for(int i=2;i*i < M;i++){
        if(found[i]) continue;
        for(int j=i*2;j<M;j+=i){
            found[j] = true;
        }
    }
    for(int i=2;i<M;i++){
        isPrime[i] = !found[i];
    }
}

int main(){
    seive();
    while(true){
        int a,d,n;
        cin >> a >> d >> n;
        if(a==0)break;
        int now = a;
        int c = 0;
        while(true){
            if(isPrime[now]) c++;
            if(c==n){
                cout << now << endl;
                break;
            }
            now += d;
        }
    }
    return 0;
}