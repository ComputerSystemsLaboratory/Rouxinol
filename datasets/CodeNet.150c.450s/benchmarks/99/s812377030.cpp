#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;
int Stoi(string S) {
    if(S.empty()) return 0;
    int now = 1;
    if(S[0] >= '2' && S[0] <= '9') {
        now *= (int)(S[0] - '0');
        S.erase(S.begin());
    }
    if(S[0] == 'm') now *= 1000;
    if(S[0] == 'c') now *= 100;
    if(S[0] == 'x') now *= 10;
    S.erase(S.begin());
    return now + Stoi(S);
}

string itoS(int i) {
    if(i == 0) return "";
    string ret;
    int copy = i;
    int digit = 1;
    while(copy >= 10) {
        copy /= 10;
        digit *= 10;
    }
    if(copy >= 2) {
        ret.push_back((char)('0' + copy));
    }
    if(digit == 1000) ret.push_back('m');
    if(digit == 100) ret.push_back('c');
    if(digit == 10) ret.push_back('x');
    if(digit == 1) ret.push_back('i');
    return ret + itoS(i - copy * digit);
}

int main() {
    //cout.precision(10);
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        string a, b;
        cin >> a >> b;
        cout << itoS(Stoi(a) + Stoi(b)) << endl;
    }
    return 0;
}
