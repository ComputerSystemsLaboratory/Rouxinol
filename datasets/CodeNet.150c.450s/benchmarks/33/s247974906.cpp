//Tax Rate Changed
#include<bits/stdc++.h>
using namespace std;

int main(){
  double x, y, s;
  while(true){
    cin>>x>>y>>s;
    if(x==0 && y==0 && s==0)break;
    int mx=0;
    for(double i=1; i<s; i+=1){
      for(double j=1; j<s; j+=1){
        if(i+j>s)break;
        int tmp;
        if((int)(i*(100.0+x)/100.0)+(int)(j*(100.0+x)/100.0) != (int)s)continue;
        tmp=(int)(i*(100.0+y)/100.0)+(int)(j*(100.0+y)/100.0);
        if(mx<tmp)mx=tmp;
      }
    }
    cout<<mx<<endl;
  }
  return 0;
}