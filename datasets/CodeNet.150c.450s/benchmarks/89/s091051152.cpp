#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
const int INF = 100000000;
using namespace std;


const int kN = 1000000;
void primeNumber(bool prime[kN]){
    rep(i,kN) prime[i] = 1;
    prime[0] = prime[1] = 0;
    rep(i,kN){
        if(prime[i]){
            for(int j = i + i; j < kN; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    bool p[kN];
    primeNumber(p);

    int a, d, n;
    while(cin >> a >> d >> n, a||d||n){
        vector<int> v;
        for(int i = a; i < kN; i+=d){
            if(p[i] == 1){
                v.emplace_back(i);
            }
        }
        cout << v[n - 1] << endl;
    }

}