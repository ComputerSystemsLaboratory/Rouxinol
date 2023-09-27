#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int n,s;
    while(cin>>n,n){
        cin>>s;
        int mins=s,maxs=s,sum=s;
        rep(i,n-1){
            cin>>s;
            mins = min(mins,s);
            maxs = max(maxs,s);
            sum += s;
        }
        cout<<(sum-maxs-mins)/(n-2)<<endl;
    }
    return 0;
}