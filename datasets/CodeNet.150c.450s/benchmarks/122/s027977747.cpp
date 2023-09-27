#include<iostream>
#define INF -2000000001
using namespace std;

int A[2000001],size;

void increase(int i,int key){
  int tmp;
  A[i]=key;
  while(i>1 && A[i/2]<A[i])tmp=A[i],A[i]=A[i/2],A[i/2]=tmp,i=i/2;
}

void insert(int key){
  size++,A[size]=INF;
  increase(size,key);
}

void maxHeapify(int i){
  int l,r,largest,tmp;
 l=i*2;
  r=i*2+1;
  if(l<=size && A[l]>A[i])largest=l;
  else largest=i;

  if(r<=size && A[r]>A[largest])largest=r;
  if(largest!=i){tmp=A[i],A[i]=A[largest],A[largest]=tmp; maxHeapify(largest);}
}

int extractMax(){
  int max;
  max=A[1],A[1]=A[size],size--,maxHeapify(1);
  return max;
}

int main(){
  string s;
  int a;
  while(1){
    cin>>s;
    if(s=="insert")cin>>a,insert(a);
    else if(s=="extract") cout<<extractMax()<<endl;
    else if(s=="end") break;
   }

  return 0;
}