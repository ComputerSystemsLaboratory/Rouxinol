#include<iostream>
#include<string>
using namespace std;

int main(){

  int m,a,b,t=0,s;

  while(cin>>m>>a>>b){
    t=0;
    if(m==0){
      break;
    }

  int p[m];
  for(int i=0;i<m;i++){
    cin>>p[i];
  }

  for(int i=a;i<=b;i++){
    if(t<=p[i-1]-p[i]){
      t=p[i-1]-p[i];
      s=i;
    }
  }
  

  cout<<s<<endl;

  }

  return 0;
}