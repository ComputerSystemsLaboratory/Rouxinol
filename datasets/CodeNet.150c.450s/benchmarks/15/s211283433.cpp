#include<iostream>
using namespace std;

int main(){
  int n[10000],s[10000],N,S,cnt=0;
  cin>>N;
  for(int i=0;i<N;i++)cin>>n[i];
  cin>>S;
  for(int i=0;i<S;i++) cin>>s[i];
  for(int i=0;i<S;i++)
    for(int j=0;j<N;j++) if(n[j]==s[i]){
 cnt++;
 break;
      }

  cout<<cnt<<endl;
  return 0;
}