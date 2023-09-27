#include <bits/stdc++.h>
using namespace std;

int X, Y, S;

void solve(){
    vector<int> vec(S+1, -1);
    
    for(int i=0; i<=S; i++){
        int a = i*(100+X)/100;
        if(a > S)
            break;
        vec[a] = i;
    }
    int ans = 0;
    for(int i=1; i<S; i++){
        int a = vec[i]*(100+Y)/100;
        int b = vec[S-i]*(100+Y)/100;
        
        ans = max(ans, a+b);
    }
    cout << ans << endl;
}

int main(){
    while(cin >> X >> Y >> S, X|Y|S){
        solve();
    }
    return 0;
}