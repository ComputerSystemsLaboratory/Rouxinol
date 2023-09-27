#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
using namespace std;

int main(){
string s;
int n,m,x,y;
while(cin>>n && n!=0){
int c=0;
int ma[22][22]={0};
for(int aa=0;aa<n;aa++){
cin>>x>>y;
ma[x][y]=1;
}
cin>>m;
int nx=10,ny=10,w;
for(int aa=0;aa<m;aa++){
cin>>s>>w;
if(s=="N"){
while(w>0){
ny++;
if(ma[nx][ny]==1){
ma[nx][ny]=0;
c++;
}
w--;
}
}
if(s=="S"){
while(w>0){
ny--;
if(ma[nx][ny]==1){
ma[nx][ny]=0;
c++;
}
w--;
}
}
if(s=="E"){
while(w>0){
nx++;
if(ma[nx][ny]==1){
ma[nx][ny]=0;
c++;
}
w--;
}
}

if(s=="W"){
while(w>0){
nx--;
if(ma[nx][ny]==1){
ma[nx][ny]=0;
c++;
}
w--;
}
}

}

if(n==c)cout<<"Yes"<<endl;
else cout<<"No"<<endl;

}
return 0;
}