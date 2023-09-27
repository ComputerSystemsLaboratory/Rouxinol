#include<bits/stdc++.h>
using namespace std;
#define MK make_pair 



int main(){
  while(1){


    
  int n;
  cin>>n;
  if(n==0){break;}
  int t[1000000]={};
  for(int i=0;i<n;i++){
    int h,m,s;
    char c;
    cin>>h>>c>>m>>c>>s;
    int a=h*60*60+m*60+s;
    t[a]++;
    cin>>h>>c>>m>>c>>s;
    a=h*60*60+m*60+s;
    t[a]--;
  }
  int mx=0;
  int count=0;
  for(int i=0;i<1e6;i++){
    count+=t[i];
    mx=max(mx,count);
  }
  cout<<mx<<endl;
  



  }
  return 0;
}

