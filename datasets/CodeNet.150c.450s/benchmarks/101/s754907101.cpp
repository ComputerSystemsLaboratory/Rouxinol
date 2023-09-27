#include<bits/stdc++.h>
using namespace std;

int a[200000];
int search(int k){
  if(a[k]==k){return k;}
  int p=search(a[k]);
  a[k]=p;
  return p;
}




int main(){
  for(int i=0;i<200000;i++){
    a[i]=i;
  }
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    int p,q;
    cin>>p>>q;
    a[search(p)]=search(q);
  }

  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    int s,t;
    cin>>s>>t;
    if(search(s)==search(t)){cout<<"yes"<<endl;}
    else{cout<<"no"<<endl;}
  }

  
  
  return 0;
}

