#include<iostream>
using namespace std;
int main(){
int h,ans;
while(cin>>h,h){
ans=0;
int t[200][5]={{0},{0}};
for(int i=0;i<h;i++)for(int j=0;j<5;j++)cin>>t[i][j];
while(1){
bool f=1;
for(int i=0;i<h;i++){
int c=0,fi=-1;
for(int j=0;j<3;j++){
if(t[i][j]==t[i][j+1]&&t[i][j]==t[i][j+2]&&t[i][j]!=0){
c++;
if(fi==-1)fi=j;
}
}
if(c!=0)ans+=t[i][fi]*(2+c),f=0;
if(c!=0)for(int j=0;j<2+c;j++)t[i][fi+j]=0;
}
if(f)break;
for(int i=h-2;i>=0;i--){
for(int j=0;j<5;j++){
int ti=i;
while(true){
if(ti==h-1||t[ti+1][j]!=0)break;
t[ti+1][j]=t[ti][j];
t[ti][j]=0;
ti++;
}
}
}
}
cout<<ans<<endl;
}
return 0;
}