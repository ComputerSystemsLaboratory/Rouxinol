#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  while(cin>>a>>b>>c,a){
    int p[a];
    for(int i=0;i<a;++i) cin>>p[i];
    sort(p,p+a);
    int x=0, y;
    for(int i=a-b;i>=a-c;--i)
      if(p[i]-p[i-1]>=x) x=p[i]-p[i-1], y=i;
    cout<<a-y<<endl;
  }
  return 0;
}