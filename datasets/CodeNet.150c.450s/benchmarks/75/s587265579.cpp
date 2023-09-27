#include <iostream>

using namespace std;

int H;

//heapify subtree whose root is i
void maxHeapify(int a[],int i){
  int left=2*i;
  int right=2*i+1;
  //select maximum node in left,i,right
  int largest=i;
  if(left<=H && a[left]>a[i]) largest=left;
  if(right<=H && a[right]>a[largest]) largest=right;
  if(largest != i){
    swap(a[i],a[largest]);
    maxHeapify(a,largest);
  }
}

void buildMaxHeap(int a[]){
  for(int i=H/2;i>0;i--){
    maxHeapify(a,i);
  }
}

int main(){
  cin >> H;
  int a[H+1];
  for(int i=1;i<=H;i++)
    cin >> a[i];
  buildMaxHeap(a);
  for(int i=1;i<=H;i++) cout << " " << a[i];
  cout << endl;
}