#include<bits/stdc++.h>
using namespace std;
int m,a,b,p[205],c,d;

int main(){
  while(1){
    cin>>m>>a>>b;
    if(!m&&!a&&!b)break;
    c=d=0;
    for(int i=0;i<m;i++)cin>>p[i];
    for(int i=b-1;i>=a-1;i--)
      if(p[i]-p[i+1]>c)c=p[i]-p[i+1],d=i+1;
    cout<<d<<endl;
  }
  return 0;
}