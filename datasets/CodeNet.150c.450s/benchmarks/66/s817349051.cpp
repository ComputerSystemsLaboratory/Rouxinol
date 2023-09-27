#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    bool state = false;
    int N; cin >> N;
    set<string> st;
    rep(i, N){
        string S; cin >> S;
        st.insert(S);
    }
    int M; cin >> M;
    rep(i, M){
        string S; cin >> S;
        if(st.count(S) == 1){
            if(state) cout << "Closed by " << S << endl;
            else cout << "Opened by " << S << endl;
            state = !state;
        }
        else cout << "Unknown " << S << endl;
    }
    return 0;
}
