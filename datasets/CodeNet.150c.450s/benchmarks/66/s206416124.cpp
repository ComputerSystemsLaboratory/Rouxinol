#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
using namespace std;
using Graph = vector<vector<int>>;
typedef pair<int,int> P;
typedef long long ll;

int main(){
	int n; cin >> n;
    set<string> st;
    rep(i,n){
        string s; cin >> s;
        st.insert(s);
    }

    int m; cin >> m;

    bool jud = true;
    rep(i,m){
        string t; cin >> t;
        if(st.count(t)){
            if(jud){
                cout << "Opened by " << t << endl;
                jud = false;
            }
            else{
                cout << "Closed by " << t << endl;
                jud = true;
            }
        }

        else{
            cout << "Unknown " << t << endl;
        }
    }
}
