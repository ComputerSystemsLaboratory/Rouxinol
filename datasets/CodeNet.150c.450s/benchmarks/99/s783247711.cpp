#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

inline int toInt(string s) {int v; istringstream sin(s);sin>>v; return v;}

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector< vector<int> > Mat;
typedef tuple<int, int, int, int> T;

const int MOD = (int)1e9+7;
const int INF = (int)1e9;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
const int ddx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int ddy[] = {1, 1, 0, -1, -1, -1, 0, 1};

int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n;
    cin >> n;

    rep(_, n){
        string s[3]; cin >> s[0] >> s[1];
        
        int ans = 0;
        
        rep(k, 2){
            int p = 1;
            rep(i, s[k].size()){
            
                if(s[k][i] == 'm') ans += p*1000, p = 1;
                else if(s[k][i] == 'c') ans += p*100, p = 1;
                else if(s[k][i] == 'x') ans += p*10, p = 1;
                else if(s[k][i] == 'i') ans += p*1, p = 1;
                else if(s[k][i] == ' '){

                }
                else {
                    //cout << s[k][i] - '0' << endl;
                    p = s[k][i] - '0';
                    //p = 1;
                }
            }
            //cout << ans << endl;
        }


        //cout << ans << endl;

        while(ans != 0){
            if(1000 <= ans){
                if(ans / 1000 != 1) cout << ans / 1000;
                cout << 'm';
                ans %= 1000;
            }else if(100 <= ans){
                if(ans / 100 != 1) cout << ans / 100;
                cout << 'c';
                ans %= 100;
            }else if(10 <= ans){
                if(ans / 10 != 1) cout << ans / 10;
                cout << 'x';
                ans %= 10;
            }else{
                if(ans != 1) cout << ans;
                cout << 'i';
                ans = 0;
            }
        }
        cout << endl;
    }

    return 0;
}
