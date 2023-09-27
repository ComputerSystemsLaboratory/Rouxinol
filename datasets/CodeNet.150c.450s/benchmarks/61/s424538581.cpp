#include<iostream>
#include<vector>
using namespace std;
int acu(int a,int b,int c,int x){
    int y=a*x;
    y+=b;
    y=y%c;
    return y;
}
int main(void){
    int n,a,b,c,x;
while(1){
cin>>n>>a>>b>>c>>x;
if(n==0)break;
vector<int> y(n+1);
y[0]=x;
for(int i=0;i<n;i++)
cin>>y[i+1];
int ans=0;
int mem;
for(int i=1;i<=n;i++){
mem=y[i-1];
while(y[i]!=mem||i!=1){
    mem=acu(a,b,c,mem);
    ans++;
    if(ans>10000){
        ans=-1;
         break;
    }
    if(y[i]==mem)break;
}
if(ans==-1)break;
}
cout<<ans<<endl;
}
return 0;
}