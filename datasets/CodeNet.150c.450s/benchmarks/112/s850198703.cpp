#include<iostream>
using namespace std;
int main(){
char a,b,c[128],d[128];
int n,i;
while(cin>>n){
if(n==0)break;
for(i=0;i<128;i++)c[i]=d[i]=i;
for(i=0;i<n;i++){cin>>a>>b;c[a]=d[b];}
cin>>n;
for(i=0;i<n;i++){cin>>a;cout<<c[a];}
cout<<endl;
}
return 0;
}