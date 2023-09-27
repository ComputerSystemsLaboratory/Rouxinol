#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
#include <map>
#include <stack>
using namespace std;
 
int dx[8]={1,-1,0,0,1,1,-1,-1};
int dy[8]={0,0,1,-1,-1,1,-1,1};
 
 
int main() {
int yoko,tate,px,py;
while(cin>>yoko>>tate &&yoko){
 
    int m[55][55]={0};
 
string st;
//cin>>yoko>>tate;
for(int i=1;i<tate+1;i++){
for(int j=1;j<yoko+1;j++){
cin>>m[i][j];
}
}
int ans=0;

for(int i=0;i<tate+1;i++){
for(int j=0;j<yoko+1;j++){
if (m[i][j]==0) continue;  

stack<pair<int,int> > s;
s.push(make_pair(i,j));
m[i][j]=0;
//cout<<"pxpy "<<px<<" "<<py<<endl;
while(s.empty()==false){
px=s.top().first;
py=s.top().second;
s.pop();
 
for(int i=0;i<8;i++){
//cout<<px+dx[i]<<" "<<py+dy[i]<<endl;
    if(0<px+dx[i] && px+dx[i]<tate+1 && py+dy[i]>0 && py+dy[i]<yoko+1){
     
        if(m[px+dx[i]][py+dy[i]]==1){
            m[px+dx[i]][py+dy[i]]=0;
            s.push(make_pair(px+dx[i],py+dy[i]));
            
//cout<<px+dx[i]<<" "<<py+dy[i]<<" "<<ans<<endl;
        }
 
    }}
}
 ans++;
}}
cout<<ans<<endl;
 
}
 
 
 
    return 0;
}