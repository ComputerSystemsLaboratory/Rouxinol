#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[4],b[4],i,j;
  while(cin>>a[0]){
    int c,d;
    for(i=1;i<4;i++)cin>>a[i];
    for(c=d=i=0;i<4;i++)cin>>b[i];
    for(i=0;i<4;i++)for(j=0;j<4;j++){
      if(a[i]==b[j]){
        if(i==j)c++;
        else d++;
      }
    }
    cout<<c<<' '<<d<<endl;
  }
}