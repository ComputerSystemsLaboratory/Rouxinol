#include<iostream>
using namespace std;
int main(){
  while(1){
    int a,b,c,d[101],sum=0;
    cin>>a>>b>>c;
    if(a+b+c==0)break;
    for(int i=0;i<a;i++)cin>>d[i],sum+=d[i];
    if(d[b-1]==0)cout<<0<<endl;
    else cout<<(sum*100-sum*c)/d[b-1]<<endl;
  }
  return 0;
}