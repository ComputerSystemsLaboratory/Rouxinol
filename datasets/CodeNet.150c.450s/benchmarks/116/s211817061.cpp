/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516*/
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    while(1){
        int n,k;
        cin >> n >> k;
        if((n==0)&&(k==0)) break;
        int s[n+1];
        s[0]=0;
        rep(i,n){
            int a;
            cin >> a;
            s[i+1]=s[i]+a;
        }
        int res=-1001001001;
        for(int i=0; i+k<n+1; i++){
            int temp=0;
            temp = s[i+k]-s[i];
            if(temp>res) res = temp;
        }

        cout << res << endl;
    }
    return 0;
}
