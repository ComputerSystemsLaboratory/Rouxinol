#include <iostream>

using namespace std;

int n;

void maxHeapify(int a[],int i){
  int largest;
  // select maximum node in left,itself,right
  if(2*i<=n && a[2*i]>a[i]) largest=2*i;
  else largest=i;
  if(2*i+1<=n && a[2*i+1]>a[largest]) largest=2*i+1;
  if(largest!=i){
    int t=a[i];
    a[i]=a[largest];
    a[largest]=t;
    maxHeapify(a,largest);
  }
}

void buildMaxHeap(int a[]){
  for(int i=n/2;i>=1;i--) maxHeapify(a,i);
}

int main(){
  cin >> n;
  int a[n];
  for(int i=1;i<=n;i++) cin >> a[i];
  buildMaxHeap(a);
  for(int i=1;i<=n;i++) cout << " " << a[i];
  cout << endl;
}