#include<iostream>
using namespace std;

#define check cout<<"-------"<<endl;
#define debug(x) cout<<x<<endl;

void buildMaxHeap(int *);
void maxheapify(int *, int);

int N;

int main() {

  cin>>N;

  int a[N];
  for(int i = 1; i <= N; i++) cin>>a[i];

  buildMaxHeap(a);


  for(int i = 1; i <= N; i++) cout<<' '<<a[i];
  cout<<endl;

  return 0;
}

void maxHeapify(int *a, int i) {

  int l = i*2;
  int r = i*2+1;

  int largest;
  if( l <= N && a[l] > a[i])  largest = l;
  else largest = i;

  if(r <= N && a[r] > a[largest]) largest = r;

  if(largest != i) {
    int s = a[i];
    a[i] = a[largest];
    a[largest] = s;
    maxHeapify(a, largest);
  }
}

void buildMaxHeap(int *a) {
  for(int i = N/2; i > 0; i--) maxHeapify(a, i);
}

