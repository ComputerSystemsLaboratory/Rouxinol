#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
using namespace std;

// Maximum Profit

int main(){
    int N;
    cin >> N;
    int R[N], S[N];
    REP(i,N){
        cin >> R[i];
    }
    int t = 1e+9;
    REP(i,N){
        if(R[i]<t){
            t = R[i];
        }
        S[i] = t;
    }
    int ans = -1e+9;
    REP(i,N-1){
        ans = max(ans,R[i+1]-S[i]);
    }
    cout << ans << endl;
    return 0;
}