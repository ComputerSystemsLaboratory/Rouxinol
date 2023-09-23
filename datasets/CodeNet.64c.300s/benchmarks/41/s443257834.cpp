#include<iostream>
using namespace std;
int n;
int H[5000000];
void buildMaxHeap(void);
void maxHeapify(int);
int main()
{
 
  cin >> n;
  for(int i=1;i<n+1;++i){
    cin >> H[i];
  }
   buildMaxHeap();

  for(int i=1;i<n+1;++i){
    cout<<" "<<H[i]<<flush;
  }
  cout<<endl;
  return 0;
}

void buildMaxHeap()
{
  for(int i=n/2;i>0;--i){
    maxHeapify(i);
  }
}  

void maxHeapify(int i)
{
  int r,l,largest,tmp;
  l=i*2;
  r=i*2+1;

  if(l<=n&& H[l]>H[i])largest=l;
  else largest=i;

  if(r<=n && H[r]>H[largest])largest=r;

  if(largest!=i){
    tmp=H[i];
    H[i]=H[largest];
    H[largest]=tmp;
  
  maxHeapify(largest);
  }
}