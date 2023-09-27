#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0)break;
        int ans=0;
        for(int i=3;i<=n;i++){
            for(int j=2;j<i;j++){
                for(int k=1;k<j;k++){
                    if(i+j+k==m)ans++;
                    else if(i+j+k>m)break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}