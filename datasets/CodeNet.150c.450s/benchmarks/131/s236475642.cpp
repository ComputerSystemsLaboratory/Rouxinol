#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};

namespace patch{
    template <typename T> string to_string(const T& n){
        ostringstream stm;
        stm << n;
        return stm.str();
    }
}

ll modpow(ll a, ll b){
    if(b == 0) return 1;
    else if(b % 2 == 0){
        ll d = modpow(a, b/2) % MOD;
        return (d * d) % MOD;
    }
    else{
        return (a * modpow(a, b-1)) % MOD;
    }
}

int main(){
    while(1){
        vector<string> a(100);
        int l;
        cin>>a[0]>>l;
        if(a[0] == "0" && l == 0) return 0;

        int cnt=0;
        while(1){
            vector<char> s(l);
            for(int i=0; i<l; i++){
                if(i < a[cnt].size()) s[i] = a[cnt][i];
                else s[i] = '0';
            }

            cnt++;

            int amax=0, amin=0;
            sort(s.begin(), s.end());

            for(int i=0; i<l; i++){
                amax += (s[l-1-i] - '0') * modpow(10, l-1-i);
                amin += (s[i] - '0') * modpow(10, l-1-i);
            }

            int anxt = amax - amin;
            a[cnt] = patch::to_string(anxt);

            for(int i=cnt-1; i>=0; i--){
                if(a[i] == a[cnt]){
                    cout << i << " " << anxt << " " << cnt - i << endl;
                    goto END;
                }
            }
        }

        END:;
    }
}
