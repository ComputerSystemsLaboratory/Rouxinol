#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc,char* argv[]){
  std::ios_base::sync_with_stdio(false);
  
  int n,M=0;
  int *pi,*tmp;
  cin>>n;

  pi=new int[n];
  for(int i=0;i<n;i++){
    cin>>pi[i];
    M=max(M,pi[i]);
  }

  tmp=new int[M+1];
  for(int i=0;i<n;i++){
    tmp[pi[i]]++;
  }

  bool flag=true;
  for(int i=0;i<=M;i++){
    if(tmp[i]>0 && flag){
      flag=false;
      cout<<i;
      tmp[i]--;
    }
    while(tmp[i]>0){
      cout<<" "<<i;
      tmp[i]--;
    }
  }
  cout<<endl;
  return 0;
}