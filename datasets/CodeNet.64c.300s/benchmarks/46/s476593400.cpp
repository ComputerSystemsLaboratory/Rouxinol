#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

const int N = 1000000;
bool isprime[N];

int main() {
    FOR(i,2,N-1) isprime[i] = 1;
    FOR(i,2,N-1){
        if (!isprime[i]) continue;
        int x = 2*i;
        while (x < N){
            isprime[x] = 0;
            x += i;
        }
    }
    int a, d, n;
    while (cin >> a >> d >> n && n){
        while (n){
            if (isprime[a]) n--;
            a += d;
        }
        cout << a - d << endl;
    }
    return 0;
}