#include<bits/stdc++.h>
using namespace std;
int h,t[500001];
void maxHeapify(int i){
  int l = i*2,r = i*2+1,largest;
  if (l<=h&&t[l]>t[i])
    largest=l;
  else 
    largest = i;
  if(r<=h&&t[r]>t[largest])
    largest=r;
  if(largest!=i)
    swap(t[i],t[largest]),maxHeapify(largest);
}

void buildMaxHeap(){
  for(int i=h/2;i>0;i--)
    maxHeapify(i);
}
int main(){
  cin>>h;
  for(int i=1;i<=h;i++)cin>>t[i];
  buildMaxHeap();
  for(int i=1;i<=h;i++)cout<<" "<<t[i];
  cout<<endl;
  return 0;
}