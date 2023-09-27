#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B, C, X;
    int Y[102];

    while(true){
        cin >> N >> A >> B >> C >> X;
        if(N == 0) break;
        for(int i=0;i<N;i++) cin >> Y[i];
        int n = 0;
        int cnt = -1;

        while(n < N){
            if(Y[n] == X) n++;
            X = (A * X + B) % C;
            cnt++;
            // cout << cnt << endl;
            if(cnt > 10000) break;
        }
        if(cnt > 10000){
            cout << -1 << endl;
        }else{
            cout << cnt << endl;
        }
    }
    return 0;
}
