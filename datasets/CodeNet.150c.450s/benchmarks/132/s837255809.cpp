#include<iostream>
using namespace std;
int n,p;
int solve(){
  int cnt=0;
  int t[50]={};
  for(int i=0;;i=(i+1)%n){
    if(p==0){
      if(t[i]>0)cnt--;
      p=t[i];
      t[i]=0;
    }else{
      if(t[i]==0)cnt++;
      t[i]++;
      p--;
      if(p==0&&cnt==1)return i;
    }
  }
}
int main(){
  while(1){
    cin>>n>>p;
    if(n==0&&p==0)break;
    cout<<solve()<<endl;
  }
  return 0;
}