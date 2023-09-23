#include<bits/stdc++.h>
using namespace std;
int n,cnt;
void sach(int x,int sum){
  if(x==4){
    if(sum==n) cnt++;
    return;
  }
  for(int i=0;i<10;++i) sach(x+1,sum+i);
}
int main(){
  while(cin>>n){
    cnt=0;
    sach(0,0);
    cout<<cnt<<endl;
  }
  return 0;
}