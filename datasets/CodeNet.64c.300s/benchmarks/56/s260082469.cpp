#include <iostream>
using namespace std;

int main(void){
  int n;cin>>n;
  for(int i=0,y,m,d;i<n;++i){
    cin>>y>>m>>d;
    int cnt=1;
    for(;d<((y%3)?((m%2)?20:19):20);++d) ++cnt;
    for(m=m+1;m<11;++m) cnt+=((y%3)?((m%2)?20:19):20);
    for(y=y+1;y<1000;++y) cnt+=(y%3)?195:200;
    cout<<cnt<<endl;
  }
  return 0;
}