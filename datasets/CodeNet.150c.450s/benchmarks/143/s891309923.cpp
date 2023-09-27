#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int cnt[N],a[N];
int main(){
        memset(cnt,0,sizeof(cnt));
        int n; cin>>n; long long sum=0;
        for(int i=0;i<n;i++) { cin>>a[i]; cnt[a[i]]++; sum+=(long long)a[i]; }
        int q; cin>>q; long long b,c;
        while(q--){
                cin>>b>>c;
                sum=(sum+(c-b)*cnt[b]);
                cnt[c]+=cnt[b];
                cnt[b]=0;
                cout<<sum<<endl;
        }
}

