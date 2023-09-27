#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;
const int MOD = 1000000007;

typedef long long ll;
typedef pair<int, int> pr;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    string u[256];
    string t;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> u[i];
        }
        cin >> m;
        int st = 0;
        for(int i = 0; i < m; i++){
            cin >> t;
            int j = 0;
            for(j = 0; j < n; j++){
                if(t == u[j]) break;
            }
            if(j == n){
                cout << "Unknown ";
            }else{
                st = 1 - st;
                cout << ((st == 1) ? "Opened" : "Closed") << " by ";
            }
            cout << t << endl;
        }
    }
    return 0;
}