#include<iostream>
using namespace std;

int f(int x){
int y;
y=x*x;
return y;}
int main(){
int d,e,ans;
while(cin>>d){
ans=0;
e=600/d;
for(int i=0;i<e;i++){
ans+=f(i*d)*d;}
cout<<ans<<endl;}}