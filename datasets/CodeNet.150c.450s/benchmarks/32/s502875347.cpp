#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
const int INF = 100000000;
using namespace std;

int main(){
    int m, maxi, mini;
    int p[10005];
    while(cin >> m >> mini >> maxi, m||mini||maxi){
        mini--; maxi--;
        rep(i,m) cin >> p[i];

        int n = 0, g = 0;
        for(int i = maxi; i >= mini; i--){
            if(p[i] - p[i + 1] > g){
                g = p[i] - p[i + 1];
                n = i + 1;
            }
        }
        cout << n << endl; 
    }
}