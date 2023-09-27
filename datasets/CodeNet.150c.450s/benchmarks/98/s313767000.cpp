

#include <iostream>
using namespace std;
int main() {
    int n,m;
    int S[205];
    while(cin >> n >> m, !(n==0 && m==0)){
        for(int i=0; i<n+m; i++){
            int s;
            cin >> s;
            S[i] = s;
        }
        int a=0,b=0;
        for(int i=0; i<n; i++){a += S[i];}
        for(int i=n; i<n+m; i++){b += S[i];}
        if((a+b)%2==1){cout << -1 << endl;}
        else{
            int ans1=105,ans2=105;
            for(int i=0; i<n; i++){
                for(int j=n; j<n+m; j++){
                    if(S[i]-S[j] == (a-b)/2 && ans1+ans2 > S[i]+S[j] ){
                        ans1=S[i];
                        ans2=S[j];
                    }
                }
            }
            if(ans1==105 && ans2==105)cout<< -1 << endl;
            else cout << ans1 << " " << ans2 << endl;
        }
    }
    return 0;
}