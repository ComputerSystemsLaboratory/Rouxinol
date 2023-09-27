#include <bits/stdc++.h>
using namespace std;
bool h[500000000];
int main(){
  int n,i,t=0,q[13];
  for(i=1;t<13;i*=5)q[t++]=i;
  cin>>n;
  while(n--){
    char a[10],b[14];
    scanf("%s %s",a,b);
    for(t=i=0;i<strlen(b);i++){
      if(b[i]=='A')t+=q[i]*1;
      if(b[i]=='C')t+=q[i]*2;
      if(b[i]=='G')t+=q[i]*3;
      if(b[i]=='T')t+=q[i]*4;
    }
    if(a[0]=='i')h[t]++;
    else{
      if(h[t])cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
  }
}