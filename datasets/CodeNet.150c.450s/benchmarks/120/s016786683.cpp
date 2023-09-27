#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
    int w,h;
    while(cin>>h>>w, w|h){
        vvi g(w,vi(h));
        rep(i,h)rep(j,w) cin >> g[j][i];
        int m=0;
        rep(mask,1<<h){
            int s=0;
            rep(j,w){
                int c=0;
                rep(i,h) c += g[j][i] ^ (mask>>i & 1);
                s += max(c, h-c);
            }
            m=max( m , s );
        }
        cout << m << endl;
    }
}