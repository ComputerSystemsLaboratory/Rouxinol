#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ans[5][37]={ 1 };
    for(int i=1; i<=4; i++) {
        ans[i][0]=ans[i-1][0];
        for(int j=1; j<=36; j++) {
            ans[i][j]=ans[i][j-1]+ans[i-1][j];
            if(j>9) ans[i][j]-=ans[i-1][j-10];
        }
    }

    int n;
    while(cin>>n) {
        if(n>36) cout<<"0\n";
        else cout<<ans[4][n]<<'\n';
    }
    return 0;
}

