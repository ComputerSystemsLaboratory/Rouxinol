#include <iostream>
using namespace std;

int left(int i){ return 2*i; }
int right(int i){ return 2*i+1; }
int parent(int i){ return i/2; }

int main(){
   int H;
   int heap[251];
   cin >> H;
   for(int i=1; i<H+1; i++){
      cin >> heap[i];
   }
   for(int i=1; i<H+1; i++){
      cout << "node " << i << ": ";
      cout << "key = " << heap[i] << ", ";
      if(parent(i)) cout << "parent key = " << heap[parent(i)] << ", ";
      if(left(i)<=H) cout << "left key = " << heap[left(i)] << ", ";
      if(right(i)<=H) cout << "right key = " << heap[right(i)] << ", ";
      cout << endl;
   }
}
