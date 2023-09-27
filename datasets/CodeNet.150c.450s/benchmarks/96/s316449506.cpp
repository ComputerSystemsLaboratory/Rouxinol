#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int INT = 1e9;
const ll LINF = 1e18;

string s;
vector<string> button(10);
void init(){
    button[1] = ".,!? ";
    button[2] = "abc";
    button[3] = "def";
    button[4] = "ghi";
    button[5] = "jkl";
    button[6] = "mno";
    button[7] = "pqrs";
    button[8] = "tuv";
    button[9] = "wxyz";
}
string solve(){
    string res;
    replace(s.begin(),s.end(),'0',' ');
    s += "#";
    stringstream ss; ss << s;
    while(true){
        string X; ss >> X;
        if(X == "#") break;
        int i = X[0] - '0';
        int j = (X.length()-1)%(int)button[i].length();
        res += button[i][j];
    }
    return res;
}
int main(void){
    cin.tie(0); ios_base::sync_with_stdio(false);
    init();
    int T; cin >> T;
    while(T--){
        cin >> s;
        cout << solve() << endl;
    }
    return 0;
}

