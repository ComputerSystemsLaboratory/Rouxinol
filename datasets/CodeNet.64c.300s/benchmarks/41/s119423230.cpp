#include<bits/stdc++.h>
using namespace std;
int H,A[5000001]={};

void mh(int i){
  int l=i*2,r=i*2+1,lar=i;
  if(A[l]>A[i]&&l<=H)lar=l;
  if(A[r]>A[lar]&&r<=H)lar=r;
    
  if(lar!=i){
    swap(A[lar],A[i]);
    mh(lar);
  }
}

int main(){
  cin>>H;
  for(int i=1;i<=H;i++)cin>>A[i];
  for(int i=H/2;i>0;i--)mh(i);
  for(int i=1;i<=H;i++)cout<<" "<<A[i];
  cout<<endl;
  return 0;
}