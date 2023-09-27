#include <bits/stdc++.h>

#define rep(X,N) for(ll X = 0LL; X < (N); X++)
#define ALL(V) (V).begin(),(V).end()
#define endl "\n"

using namespace std;
typedef long long ll;

const double PI = 3.1415926535897932384626;
const ll MODN = 1000000007;
const ll MODN2 = 998244353;
const double EPS = 1e-10;

int D;
int c[26] = {};
int s[365][26] = {};
int state[365] = {};
int last[26] = {};

int score(int day){
    rep(i, 26){
        last[i] = 0;
    }

    int result = 0;

    rep(i, day){
        result += s[i][state[i] - 1];
        last[state[i] - 1] = i + 1;

        rep(j, 26){
            result -= ((i + 1) - last[j]) * c[j];
        }
    }

    return result;
}

void solve(){

}

int main(){

    cin >> D;
    rep(i, 26){
        cin >> c[i];
    }
    rep(i, D){
        rep(j, 26){
            cin >> s[i][j];
        }
    }
    rep(i, D){
        cin >> state[i];
    }

    //solve();

    rep(i, D){
        cout << score(i + 1) << endl;
    }

    return 0;
}
