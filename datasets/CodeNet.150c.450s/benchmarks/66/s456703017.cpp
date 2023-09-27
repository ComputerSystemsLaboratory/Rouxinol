#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin >> N;
    set<string> registered;
    for (int i=0;i<N;++i){
        string U; cin >> U;
        registered.insert(U);
    }
    int M; cin >> M;
    int now=0;
    for (int i=0;i<M;++i){
        string T; cin >> T;
        if (registered.count(T)){
            cout << (now?"Closed by ":"Opened by ") << T << endl;
            now^=1;
        } else cout << "Unknown " << T << endl;
    }
}
