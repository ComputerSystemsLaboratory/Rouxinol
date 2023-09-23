#include<iostream>
using namespace std;
int main(){
  int b[10];
  int t;
  cin>>t;
  while(t--){
    for(int i=0;i<10;i++)
      cin>>b[i];
    int now=b[0];
    b[0]=0;
    for(int i=1;i<10;i++)
      if(b[i]>now){
	now=b[i];
	b[i]=0;
      }
    /*for(int i=0;i<10;i++)
      cout<<b[i]<<" ";
      cout<<"\n";*/
    for(int i=0;i<10;i++)
      if(b[i]>0){
	now=i;
	break;
      }
    bool flag=true;
    for(int i=now;i<10;i++)
      if(b[i]>0&&b[i]<b[now])
	flag=false;
      else if(b[i]>0)
	now=i;
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
  }
}