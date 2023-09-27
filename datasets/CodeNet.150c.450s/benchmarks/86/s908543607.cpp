#include<iostream>

using namespace std;
int main(){
  int n,m,p;
 
  while(cin>>n>>m>>p,n!=0){
    int a[2000];
    int sum=0;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a[i]=x;
      sum+=x;
    }
    int g=(sum*100)*(100-p)/100;
    if(a[m-1]==0)cout<<0<<endl;
    else  cout<<g/a[m-1]<<endl;
  }
  return 0;
}