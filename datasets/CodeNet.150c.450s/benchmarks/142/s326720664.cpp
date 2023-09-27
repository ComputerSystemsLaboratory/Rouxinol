#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn=2e5+1000;
ll n,k,a[maxn];
int main(){
    //freopen("in.txt","r",stdin);
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=k;i<n;i++){
        if(a[i]>a[i-k]){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}
