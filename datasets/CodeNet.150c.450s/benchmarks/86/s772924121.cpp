#include <bits/stdc++.h>

using namespace std;

long long INF=1e15;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int n,m,p;
        cin>>n>>m>>p;

        if(n==0)break;

        int sum=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        sum*=(100-p);

        if(a[m-1]==0)sum=0;
        else sum/=a[m-1];

        cout<<sum<<endl;
    }
}
