#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < (N); i++)  

int main()
{
    // 入力
    int N,C[4]={0,0,0,0};
    int result=0;
    cin >> N;
    string S[N];
    rep(i,N){
        cin >> S[i];
    }

    //cout << "" << endl;
    // 計算
    rep(i,N){
        if (S[i]=="AC"){
            C[0]++;
        } else if (S[i]=="WA"){
            C[1]++;
        } else if (S[i]=="TLE"){
            C[2]++;
        } else if (S[i]=="RE"){
            C[3]++;
     }
    }

    // 出力
    cout << "AC x " << C[0] << endl;
    cout << "WA x " << C[1] << endl;
    cout << "TLE x " << C[2] << endl;
    cout << "RE x " << C[3] << endl;
    return 0;  
}
