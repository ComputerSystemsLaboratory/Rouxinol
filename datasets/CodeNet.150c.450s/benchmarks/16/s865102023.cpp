#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    stack<int> S1;
    stack<pair<int, int> > S2;
    int total = 0;
    string S; cin >> S;

    for(int i = 0; i < S.size(); i++){
        if(S[i] == '/' && S1.size() > 0){
            int a = S1.top(); S1.pop();
            int b = i - a;
            total += b;
            int men = 0;
            while(!S2.empty() && S2.top().first > a){
                men += S2.top().second;
                S2.pop();
            }
            men += b;
            S2.push(make_pair(i, men));
        } else if(S[i] == '_'){
            continue;
        } else if(S[i] == '\\'){
            S1.push(i);
        }
    }

    cout << total << endl;

    if(S2.size() == 0){
        cout << 0 << endl;
    } else {
        cout << S2.size() << " ";
    }
    
    stack<int> ans; 
    while(!S2.empty()){
        int X = S2.top().second; S2.pop();
        ans.push(X);
    }

    while(!ans.empty()){
        cout << ans.top(); ans.pop();
        if(!ans.empty()){
            cout << " ";
        } else {
            cout << endl;
        }
    }
}
