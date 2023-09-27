#include<bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define ALL(v) (v).begin(), (v).end()
#define p(s) cout<<(s)<<endl
#define p2(s, t) cout << (s) << " " << (t) << endl
#define br() p("")
#define pn(s) cout << (#s) << " " << (s) << endl
#define p_yes() p("Yes")
#define p_no() p("No")

const ll mod = 1e9 + 7;
const ll inf = 1e18;

template < typename T >
void vprint(T &V){
	for(auto v : V){
    	cout << v << " ";
	}
	cout << endl;
}

struct Point{
    ll x;
    ll y;
    Point(ll x, ll y): x(x), y(y) {}
    Point(){}
};

ll field[21][21];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input
    for(;;){
        // jewel num
        ll N;
        cin >> N;

        if(N==0) return 0;

        Point p = Point(10, 10);

        FOR(i, 0, 21){
            FOR(j, 0, 21){
                field[i][j] = 0;
            }
        }

        // jewel position
        FOR(i, 0, N){
            ll x, y;
            cin >> x >> y;
            field[y][x] = 1;
        }

        // move
        ll count = 0;
        ll M; cin >> M;
        FOR(i, 0, M){
            char c; cin >> c;
            ll len; cin >> len;

            FOR(j, 0, len){
                if(c=='N') p.y++;
                if(c=='S') p.y--;
                if(c=='E') p.x++;
                if(c=='W') p.x--;
                if(field[p.y][p.x]==1){
                    field[p.y][p.x] = 0;
                    count++;
                }
            }
        }
        if(count==N){
            p_yes();
        }else{
            p_no();
        }
    }

    
    return 0;
}
