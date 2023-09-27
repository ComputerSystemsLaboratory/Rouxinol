#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define lp(i, n) for (int i = 0; i < (n) ; ++i)
#define sz(v) (ll)(v).size()
#define int long long
#define mod 1000000007

int day;
int c[27];
int d[366][26], ansday[366];

void read_input() {
        //freopen("b1.in", "r", stdin);
        cin >> day;
        for (int i= 0; i< 26; i++) {
                cin >> c[i];
        }
        for (int i= 0; i< day; i++) {
                for (int j= 0; j< 26; j++) {
                        cin >> d[i][j];
                }
        }
}

void read_ans() {
        for (int i= 0; i< day; i++) {
                int x; cin >> x;
                ansday[i]= x- 1;
        }
}

void simu() {
        int lastuse[27]= {};
        int finalscore= 0;
        for (int i= 0; i< day; i++) {
                int choose= ansday[i];
                int score= d[i][choose];
                lastuse[choose]= i+ 1;
                int dec= 0;
                for (int j= 0; j< 26; j++) {
                        dec+= c[j]* ((i+ 1)- lastuse[j]);
                }
                finalscore+= score- dec;
                cout << finalscore<< "\n";
        }

}

void query() {
        int m; cin >> m;
        vector<pair<int, int>> vp;
        for (int i= 0; i< m; i++) {
                int a, b; cin >> a>> b;
                vp.push_back({a, b});
        }
        for (int i= 0; i< m; i++) {
                int wday= vp[i].first- 1;
                int wc= vp[i].second- 1;
                ansday[wday]= wc;
                simu();
        }
}

void sol() {
        int lastuse[27]= {};
        for (int i= 0; i< day; i++) {
                vector<pair<int, int>> r;
                for (int j= 0; j< 26; j++) {
                        int dec= 0;
                        for (int k= 0; k< 26; k++) {
                                if (k== j) continue;
                                dec+= c[k]* ((i+ 1)- lastuse[k]);
                        }
                        r.push_back( { (d[i][j]- dec), j } );
                }
                sort(all(r));
                reverse(all(r));
                ansday[i]= r[0].second;
                lastuse[r[0].second]= i;
        }
        for (int i= 0; i< day; i++) {
                cout << ansday[i]+ 1<< "\n";
        }
}

void solve() {
        read_input();
        //sol();
        read_ans();
        simu();
        //query();
}

int32_t main(){
ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
        int t = 1;
        //cin >> t;
        while ( t-- ) {
                solve();
        }
return 0;
}
