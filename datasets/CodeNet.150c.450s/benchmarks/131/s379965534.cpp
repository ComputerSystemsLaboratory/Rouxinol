#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;
int digit(int in) {
    if(in < 10) return 1;
    else return 1 + digit(in / 10);
}

int main() {
    //cout.precision(10);
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(true) {
        int a, L;
        cin >> a >> L;
        if(L == 0) break;
        vector<int> v;
        v.resize(1005000, -1);
        v[a] = 0;
        int index = 0;
        while(true) {
            index++;
            while(digit(a) < L && a != 0) a *= 10;
            string S = to_string(a);
            string T = S;
            sort(S.begin(), S.end());
            sort(T.begin(), T.end(), greater<char>());
            a = stoi(T) - stoi(S);
            if(v[a] != -1) break;
            v[a] = index;
        }
        cout << v[a] << " " << a << " " << index - v[a] << endl;
    }
    return 0;
}
