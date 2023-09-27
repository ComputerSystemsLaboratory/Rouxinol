#include<iostream>

int n,m,w[1000001],k;
bool cap(int mid){
  int res=1,now=0;
  for(int i=0;i<n;i++){
    now+=w[i];
    if(now>mid){
      res++;
      now=w[i];
    }
    if(w[i]>mid){
      return 0;
    }
  }
  return res<=k;
}

int main(){
  std::cin>>n>>k;
  for(int i=0;i<n;i++){
    std::cin>>w[i];
  }
  int p=0,r=1000000000;
  while(p<r){
    int mid=(p+r)/2;
    if(cap(mid)){
      r=mid;
    }else{
      p=mid+1;
    }
  }
  std::cout<<p<<"\n";
}

