#include <iostream>
using namespace std;
typedef long long ll;
ll q,n,a[200],b[61];
string s;
ll ins(ll x){
    for(ll i=60;i>=0;i--){
        if(((x>>i)&1)==1){
            if(b[i]==0){b[i]=x;return 1;}
            x^=b[i];
        }
    }
    return 0;
}
int main(void){
    cin>>q;
    while(q--){
        ll ok=0;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>s;
        for(int i=0;i<=60;i++)b[i]=0;
        for(int i=n-1;i>=0;i--){
            if(ins(a[i])==1&&s[i]=='1'){cout<<1<<endl;ok=1;break;}
        }
        if(ok==0)cout<<0<<endl;
    }
}
