#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;

vector<pair<int,int>> prime_fact(int n){
    vector<pair<int,int>> a;
    if (n <= 1) return a;
    int n_origin = n;
    for(int i=2; i<=(int)sqrt(n_origin); i++){
        if (n%i == 0){
            int count = 0;
            while(n%i == 0){
                n/=i;
                count ++;
            }
            a.push_back(make_pair(i, count));
        }
    }
    if (n!=1){
        a.push_back(make_pair(n,1));
    }
    return a;
}

int main() {
    int n; cin >> n;
    vector<pair<int,int>> primes = prime_fact(n);
    cout << n << ":";
    for (auto p: primes){
        REP(i, p.second){
            cout << " " << p.first;
        }
    }
    cout << endl;

    return 0;
}
