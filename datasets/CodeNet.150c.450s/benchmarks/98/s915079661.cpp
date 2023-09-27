#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
    int n, m;
    while(cin >> n >> m, n|m){
        vi h, t;
        int htotal = 0, ttotal = 0;
        rep(i, n){
            int input; cin >> input;
            h.pb(input);
            htotal += input;
        }
        rep(i, m){
            int input; cin >> input;
            t.pb(input);
            ttotal += input;
        }
        bool isPossible = false;
        rep(i, n)rep(j, m){
            if(ttotal+h[i]-t[j] == htotal-h[i]+t[j]){
                isPossible = true;
                cout << h[i] << " " << t[j] << endl;
                goto next;
            }
        }
next:;
        if(!isPossible) cout << -1 << endl;
    }
}