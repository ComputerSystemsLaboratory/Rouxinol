#include<bits/stdc++.h>
using namespace std;
int H=1,A[2000001];

void mh(int i){
  int l=i*2,r=i*2+1,lar=i;
  if(A[l]>A[i]&&l<=H)lar=l;
  if(A[r]>A[lar]&&r<=H)lar=r;
  if(lar!=i){
    swap(A[lar],A[i]);
    mh(lar);
  }
}

void insert(int k){
  int i=H++;
  A[i]=k;
  while(i>0&&A[i/2]<A[i]){
    swap(A[i/2],A[i]);
    i/=2;
  }
}

int extrect(){
  int ans=A[0];
  A[0]=A[--H];
  mh(0);
  return ans;
}

int main(){
  string a;
  while(cin>>a){
    if(a=="insert"){
      int n;
      cin>>n;
      insert(n);
    }else if(a=="extract"){
      cout<<extrect()<<endl;
    }else break;
  }
  return 0;
}