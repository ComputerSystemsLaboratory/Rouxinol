#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<complex>
using namespace std;
#define MOD 1000000007
#define MOD2 998244353
#define INF (1<<29)
#define LINF (1LL<<60)
#define EPS (1e-10)
#define PI 3.1415926535897932384626433832795028
typedef long long Int;
typedef pair<Int, Int> P;
typedef long double Real;
typedef complex<Real> CP;

Int mod_pow(Int x, Int a, Int m = MOD){
    if(a == 0)return 1;
    if(a % 2 == 1)return x * mod_pow(x, a - 1, m) % m;
    Int res = mod_pow(x, a / 2, m);
    return res * res % m;
}

Int inv(Int x, Int m = MOD){
    return mod_pow(x, m-2, m);
}


int main(){
    Int n, m;
    cin >> n >> m;
    cout << mod_pow(n, m, 1000000007) << endl;
    return 0;
}
