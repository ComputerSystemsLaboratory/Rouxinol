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

int main(){
    while(1){
        vector<int> a(100);
        int l; cin>>a[0]>>l;
        if(a[0] == 0 && l == 0) return 0;

        vector<int> digit(l, 0);
        int cnt=0;
        while(1){
            int num = a[cnt];
            for(int i=0; i<l; i++){
                digit[i] = num % 10;
                num /= 10;
            }

            int amax=0, amin=0;
            sort(digit.begin(), digit.end());

            int num2 = 1;
            for(int i=0; i<l; i++){
                amax += digit[i] * num2;
                amin += digit[l-1-i] * num2;
                num2 *= 10;
            }
        
            a[++cnt] = amax - amin;

            for(int i=cnt-1; i>=0; i--){
                if(a[i] == a[cnt]){
                    cout << i << " " << a[cnt] << " " << cnt - i << endl;
                    goto END;
                }
            }
        }

        END:;
    }
}
