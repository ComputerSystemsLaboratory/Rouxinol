#include<bits/stdc++.h>
using namespace std;



int main(){
  while(1){


    
  int n;
  int p;
  cin>>n>>p;
  if(n==0 && p==0){break;}
  int al=p;
  int a[100]={};
  int j=-1;
  while(j==-1){
    for(int i=0;i<n;i++){
      if(p>0){p--; a[i]++; if(a[i]==al){j=i; break;}}
      else{p+=a[i]; a[i]=0;}
    }
  }
  cout<<j<<endl;





  }
  
  return 0;
}

