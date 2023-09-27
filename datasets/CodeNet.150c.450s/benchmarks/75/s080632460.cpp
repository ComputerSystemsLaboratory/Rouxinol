#include <iostream>
using namespace std;

#define INF 2000000005

int hsize;
int A[500005];

void modheap(int i){
  int l=i*2+1;
  int r=i*2+2;
  int larger = i;
  if (l<hsize&&A[larger]<A[l])larger=l;
  if (r<hsize&&A[larger]<A[r])larger=r;
  if (larger!=i){
    swap(A[larger],A[i]);
    modheap(larger);
  }
}

void buildheap(){
  for (int i=hsize/2-1;i>=0;i--)
    modheap(i);
}

int main(){
  cin >> hsize;
  for (int i=0;i<hsize;i++)cin >>A[i];

  buildheap();
  
  for (int i=0;i<hsize;i++) cout <<" "<<A[i];
  cout << endl;
  
  return 0;
}