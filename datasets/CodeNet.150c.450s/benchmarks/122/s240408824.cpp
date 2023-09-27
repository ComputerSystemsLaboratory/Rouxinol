#include <iostream>
#include <string>
#define MAX 2000000

using namespace std;

int a[MAX+1];
int size=0;

void maxHeapify(int i){
  int largest;
  // select maximum node in left,itself,right
  if(2*i<=size && a[2*i]>a[i]) largest=2*i;
  else largest=i;
  if(2*i+1<=size && a[2*i+1]>a[largest]) largest=2*i+1;
  if(largest!=i){
    int t=a[i];
    a[i]=a[largest];
    a[largest]=t;
    maxHeapify(largest);
  }
}

void insert(int key){
  size++;
  a[size]=key;
  int i=size;
  while(i>1 && a[i/2]<a[i]){
    int t=a[i];
    a[i]=a[i/2];
    a[i/2]=t;
    i=i/2;
  }
}

int extractMax(){
  int max=a[1];
  a[1]=a[size];
  size--;
  maxHeapify(1);
  return max;
}

int main(){
  while(true){
    string com;
    cin >> com;
    if(com=="insert"){
      int k;
      cin >> k;
      insert(k);
    }else if(com=="extract"){
      cout << extractMax() << endl;
    }else if(com=="end"){
      break;
    }
  }
}