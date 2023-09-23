#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int h[500000],n;
void maxheapify(int i){
  int l = i*2+1;
  int r = (i+1)*2;
  int largest=0;
  if(l<=n&&h[l]>h[i])largest=l;
  else largest=i;
  if(r<=n&&h[r]>h[largest])largest=r;
  if(largest!=i){
    swap(h[i],h[largest]);
    //cout<<"finished"<<endl;
    maxheapify(largest);
  }
}
void buildmaxheap(){
  int i;
  for(i=n/2;i>=0;i--){
    maxheapify(i);
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>h[i];
  buildmaxheap();
  for(int i=0;i<n;i++)cout<<" "<<h[i];
  cout<<endl;
  
  return 0;
}

