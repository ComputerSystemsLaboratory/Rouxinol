#include <iostream>
using namespace std;

int A[2000000],hsize=0;

void insert(int key){
  int i=hsize;
  A[i]=key;
  hsize++;
  while(i>0&&A[i]>A[(i-1)/2]){
    swap(A[i],A[(i-1)/2]);
    i=(i-1)/2;
  }
}

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

int extract(){
  int i=0;
  int ret=A[0];
  A[0]=A[hsize-1];
  hsize--;
  modheap(0);
  return ret;
}

int main(){
  char cmd[10];
  int key;
  
  while (true){
    cin >> cmd;
    if (cmd[0]=='i'){
      cin >> key;
      insert(key);
    }else if(cmd[1]=='x'){
      cout << extract() << endl;
    }else{
      break;
    }
  }
  
  return 0;
}