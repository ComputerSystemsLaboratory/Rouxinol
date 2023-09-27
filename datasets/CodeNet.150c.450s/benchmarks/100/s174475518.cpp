#include<iostream>
using namespace std;

int main(){
int n,b=0;
bool a=false;
int ans[30];
ans[0]=1;
for(int i=1;i<30;i++){
ans[i]=0;}
cin>>n;
for(int i=2;i<n+1;i++){
for(int j=0;j<30;j++){
ans[j]*=i;
ans[j]+=b;
if(ans[j]<10)b=0;
if(ans[j]>=10){
b=(ans[j]-ans[j]%10)/10;
ans[j]%=10;
}
}
}
for(int i=29;i>-1;i--){
if(ans[i]!=0){
a=true;}
if(a){
cout<<ans[i];}}
cout<<endl;}