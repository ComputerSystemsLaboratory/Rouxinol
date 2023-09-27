#include<iostream>
using namespace std;

int main(){
  int n;
  while(cin>>n,n){
    int cnt=0;
    int ans=0;
    int data[n];
    for(int i=0;i<n;i++){
      data[i]=i+1;
    }
    int s,t;
    s=t=0;
    for(;;){
      while(t<n && cnt<n){
	cnt+=data[t++];
      }
      if(cnt<n)break;
      if(cnt==n){
	ans++;
      }
      cnt-=data[s++];
    }
    cout << ans-1 << endl;
  }
  return 0;
}