#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <iomanip>
#include <deque>
#include <stdio.h>
using namespace std;
 
#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;i>=0;i--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
typedef long long ll;

#define MOD 1000000007LL

long long pow_mod(long long n, long long k, long long mod) {
    long long ret = 1, a = n % mod;
    while (k > 0) {
        if (k & 1) ret = (ret * a) % mod;
        a = (a * a) % mod;
        k >>= 1;
    }
    return ret;
}


int main() {
    
    ll n,k;
    cin >> n >> k;

    cout << pow_mod(n,k,MOD) << endl;

    return 0;
}