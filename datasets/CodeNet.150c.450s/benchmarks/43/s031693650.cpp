#include<iostream>
#include<cstdio>
using namespace std ;
int main(){
  int n,a,b;
  for(;;){ 
 cin>>n;
 int s=0,d=0;
 if(n==0)break;
  for(int i=0;i<n;i++){
    cin >> a >> b;
  
    if(a>b){s=s+a+b;}
    if(a<b){d=d+a+b;}
    if(a==b){s=s+a,d=d+b;};
  }
  cout<<s<<" "<<d<<endl;
 
  }
  return 0;
}