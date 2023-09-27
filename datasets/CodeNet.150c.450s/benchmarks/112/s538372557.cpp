#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
char m[99][2],z,y;int main(){int s,n;while(1){cin>>s;if(s==0)break;rep(i,s)cin>>m[i][0]>>m[i][1];cin>>n;rep(i,n){cin>>z;y=z;rep(j,s)if(m[j][0]==z)y=m[j][1];cout<<y;}cout<<endl;}return 0;}