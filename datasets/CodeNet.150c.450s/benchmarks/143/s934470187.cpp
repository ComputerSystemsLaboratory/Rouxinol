#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<iomanip>
#include <math.h>
using namespace std;
int main(){
    long long int n,q,ans=0;
    cin>>n;
    vector<long long int>a(1000000);
    vector<long long int>b(1000000);
    vector<long long int>c(1000000);
    vector<long long int>d(1000000);
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans+=a[i];
        d[a[i]]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>b[i]>>c[i];
    }
    for(int i=0;i<q;i++){
        ans-=(d[b[i]]*b[i]);
        ans+=(d[b[i]]*c[i]);
        d[c[i]]+=d[b[i]];
        d[b[i]]=0;
        cout<<ans<<endl;
    }
    return 0;
}
