#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr<<#x<<": "<<x<<endl;

#define fi first
#define se second

#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const int inf = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;


int main(){
//    ifstream in("input.txt");
//    cin.rdbuf(in.rdbuf());
    int m;
    cin >> m;
    rep(loop_count,m){
        set<string> c;
        string s;
        cin >> s;
        REP(i,1,s.size()){
            string a = s.substr(0,i);
            string b = s.substr(i,s.size()-i);
//            cout << "----" << endl;
//            cout << a << endl;
//            cout << b << endl;
            c.insert(a+b);
            c.insert(b+a);
            reverse(a.begin(),a.end());
            c.insert(a+b);
            c.insert(b+a);
            reverse(b.begin(),b.end());
            c.insert(a+b);
            c.insert(b+a);
            reverse(a.begin(),a.end());
            c.insert(a+b);
            c.insert(b+a);
        }
//        for(auto a:c){
//            cout << a << endl;
//        }
        cout << c.size() << endl;
    }

    return 0;
}
