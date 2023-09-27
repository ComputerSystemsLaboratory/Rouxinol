#include <iostream>
using namespace std;
typedef long long ll;
ll n,a,b,s[201],t[201],ans,tmp;
int main(void){
    while(1){
    cin>>n>>a>>b;
    if(n==0)return 0;
    ans=0;
    tmp=0;
    
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=1;i<n;i++){
        t[i]=s[i-1]-s[i];
    }
    for(int i=a;i<=b;i++){
        if(tmp<=t[i]){tmp=t[i];ans=i;}
    }
    cout<<ans<<endl;
    }
}

