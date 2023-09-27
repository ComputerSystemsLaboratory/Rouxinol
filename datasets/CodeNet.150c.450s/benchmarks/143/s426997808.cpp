#include <bits/stdc++.h>
using namespace std;
typedef long long       ll;
const ll  big =1e5+5;
ll freq[big];

int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
ll n,k,a[big],sum=0;
cin>>n;
pair <int,int> q[big];
for(int i=0;i<n;++i){
    cin>>a[i];
    sum+=a[i];
    freq[a[i]]++;
}
cin>>k;
for(int i=0;i<k;++i){
    cin>>q[i].first>>q[i].second;
     if(freq[q[i].first]==0){cout<<sum<<endl;}
     else{
        sum-=freq[q[i].first]*q[i].first;
        sum+=freq[q[i].first]*q[i].second;
        freq[q[i].second]+=freq[q[i].first];
        freq[q[i].first]=0;
        cout<<sum<<endl;
     }

}

    return 0;
}