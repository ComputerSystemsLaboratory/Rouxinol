#include <iostream>
#include <cstring>
#define INFTY 10000000
using namespace std;

int a[2000000] = {};

int h = 0,i = 0;

int parent(int k){return (k / 2);}
int left(int k) {return (2 * k);}
int right(int k){return (2 * k + 1);}

void maxh(int i){

  int l,r,largest;
  l = left(i);
  r = right(i);

  if(l <= h && a[l] > a[i]) largest = l;
  else largest = i;
  if(r <= h && a[r] > a[largest]) largest = r;

  if(largest != i){
    swap(a[i],a[largest]);
    maxh(largest);
  }
}

void heapincrese(int *a,int i,int k){
  if(k < a[i]) return;

  a[i] = k;

  while(i > 1 && a[parent(i)] < a[i]){
    swap(a[i],a[parent(i)]);
    i = parent(i);
  }
}

void insert(int k){
  h++;
  a[h] = -INFTY;
  heapincrese(a,h,k);
}

void extract(){
  if(h < 1) return ;
  int max;
  max = a[1];
  //for(int j = 1;j <= h;j++) cout << j << "= " <<  a[j] << endl;
  cout << max << endl;
  a[1] = a[h];
  h--;
  maxh(1);
}

int main(){

  string com;

  int k;

  while(1){
    cin >> com;

    if(com == "insert"){
      cin >> k;
      insert (k);
    }
    else if(com == "extract"){
      extract();
    }
    else if(com == "end") break;
  }
}