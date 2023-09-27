#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(void)
{
    int n; cin>>n;
    vector<int> s(10050,0);
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                int x = i*i + j*j + k*k + i*j + j*k + k*i;
                if(x <= n) s[x]++;
            }
        }
    }
    rep(i,n) cout<<s[i+1]<<endl;
    return 0;
}