#include <bits/stdc++.h>

using namespace std;

long long INF=1e15;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int n,r;
        cin>>n>>r;
        if(n+r==0)break;

        vector<int> a(n);
        for(int i=0;i<n;i++)a[i]=n-i;

        for(int i=0;i<r;i++){
            int p,c;
            cin>>p>>c;
            vector<int> b(p);
            for(int j=0;j<p-1;j++)b[j]=a[j];
            for(int j=0;j<c;j++)a[j]=a[p+j-1];
            for(int j=c;j<c+p-1;j++)a[j]=b[j-c];
        }
        cout<<a[0]<<endl;
    }
}
