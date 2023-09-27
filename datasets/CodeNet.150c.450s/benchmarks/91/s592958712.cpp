#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int prime[1000000];
bool is_prime[1000001];
int main(){
    int n;
    while(cin >> n){
        int p = 0;
        rep(i, n + 1) is_prime[i] = true;
        is_prime[0] = is_prime[1] = false;
        REP(i, 2, n + 1){
            if(is_prime[i]){
                prime[p++] = i;
                for(int j = i * 2; j <= n; j += i)
                  is_prime[j] = false;
            }
        }
        cout << p <<endl;
    }
    return 0;
}