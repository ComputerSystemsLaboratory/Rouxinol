#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,s[100],num,max,min,a;
  
  while(true){
    num =0;
   
  cin>>n;
  if(n == 0)break;

  cin>>s[0];
  max=s[0];
  min=s[0];
  num=s[0];

    
  for(int i=1;i<n;i++){
    cin>>s[i];
    
    if(max<s[i])max=s[i];
    if(min>s[i])min=s[i];
       
    num += s[i];
  }
  a = (num-max-min)/(n-2);

  cout<<a<<endl;
    
  }
  return 0;
}

