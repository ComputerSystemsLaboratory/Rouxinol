#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 100000000;
using namespace std;

void warshallFloyd(int m[50][50], map<int, int> t){
    for(auto K = t.begin(); K != t.end(); K++){
        int k = K->first;
        for(auto I = t.begin(); I != t.end(); I++){
            int i = I->first;
            for(auto J = t.begin(); J != t.end(); J++){
                int j = J->first;
                m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
            }
        }
    }
}

int main(){
    int n;
    while(cin >> n, n){
        map<int, int> t;
        int m[50][50];
        int ans[2];
        ans[1] = INF;

        rep(i,50) rep(j,50) m[i][j] = INF;
        rep(i,50) m[i][i] = 0;
        rep(i,n){
            int a, b , c;
            cin >> a >> b >> c;
            m[a][b] = m[b][a] = c;
            t[a] = 1;
            t[b] = 1;
        }

        warshallFloyd(m, t);

        for(auto i = t.begin(); i != t.end(); i++){
            int sum = 0;
            for(auto j = t.begin(); j != t.end(); j++){
                sum+=m[i->first][j->first];
                //show(sum)
            }
            if(sum < ans[1] || (sum == ans[1] && ans[0] > i->first)){
                ans[0] = i->first;
                ans[1] = sum;
            }
        }
        cout << ans[0] << ' ' << ans[1] << endl;
    }
}