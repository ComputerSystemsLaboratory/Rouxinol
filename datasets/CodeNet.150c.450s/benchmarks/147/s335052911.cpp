#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <utility>
#include <set>
#include <stack>
#include <climits>
#include <cmath>
#include <iomanip>
#include <unordered_map>
#include <map>
#include <boost/multiprecision/cpp_int.hpp>

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(int i=1, i##_len=(n); i<=i##_len; ++i)
#define reps(i,s,n) for(int i=s, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
#define MEMSET(v, h) memset((v), h, sizeof(v))
typedef long long ll;
typedef long double ld;
const char sp = ' ';

using namespace boost::multiprecision;
using namespace std;

int main(void){
    ll ans[20000];
    MEMSET(ans, 0);
    rep1(i, 200) rep1(j, 200) rep1(k, 200){
        if(i*i+j*j+k*k+i*j+j*k+k*i<=16000) ans[i*i+j*j+k*k+i*j+j*k+k*i]++;
        //if(i*i+j*j+k*k+1*j+j*k+k*i<=20) cout<<i<<sp<<j<<sp<<k<<sp<<i*i+j*j+k*k+1*j+j*k+k*i<<endl;
    }
    ll N;
    cin>>N;
    rep1(i, N){
        cout<<ans[i]<<endl;
    }
    return 0;
}
