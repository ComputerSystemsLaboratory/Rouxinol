#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,t,ans=0;
cin >> a>>b>>c;
while(1){
t=c;
t%=a;
if(t==0) {ans++;};
if (b==a) break;
a++;
}	
cout<<ans<<endl;
return 0;
}
