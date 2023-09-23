#include<iostream>
using namespace std;
int h,data[500000];
void fswap(int *x,int *y){
  int tmp;
  tmp=*x;
  *x=*y;
  *y=tmp;
}
void maxheap(int x){
  int left=2*x+1,right=2*x+2,largest=x;
  if(left<h&&data[left]>data[x]) largest=left;
  if(right<h&&data[right]>data[largest]) largest=right;
  if(largest!=x){
    fswap(&data[x],&data[largest]);
    maxheap(largest);
  }
}
int main(){
  cin>>h;
  for(int i=0;i<h;++i) cin>>data[i];
  for(int i=h/2;i>0;--i) maxheap(i-1);
  for(int i=0;i<h;++i) cout<<" "<<data[i];
  cout<<endl;
  return 0;
}

