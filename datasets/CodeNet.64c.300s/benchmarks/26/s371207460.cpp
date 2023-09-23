#include <cstdio>
#include <cstdlib>
#include <utility>
#include <typeinfo>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <stack>
#include <map>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;

const int M = 1000000007;
 
long power(long x, long n)
{
    long res;
    if (n == 0)
        return 1;
 
    res = power(x*x%M, n / 2);
    if ((n & 1) != 0)
    {
        res = res*x%M;
    }
    return res;
}
int main(){
    int m,n;
    cin >> m >> n;
    cout << power(m,n) << endl;
}