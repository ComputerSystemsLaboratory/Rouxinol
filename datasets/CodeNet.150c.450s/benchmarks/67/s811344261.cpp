#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    int n;
    while(cin >> n && n){
        int k = n / 2 + 1;
        int ans = 0;
        REP(i, 1, k){
            int sum = i;
            REP(j, i + 1, k + 1){
                sum += j;
                if(sum == n){
                    ans++;
                    break;
                }else if(sum > n){
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}