#include <iostream>
using namespace std;

class myheap{
public:
  int size;
  long long int* heap;
  myheap(int size){
    this->size = size;
    heap = new long long int[size+1];
  }
  ~myheap(){
    delete[] heap;
  }
  void print(){
    for(int i=1; i<=size; i++){
      cout << "node " << i << ": key = " << heap[i];
      if(i/2>=1){
        cout << ", parent key = " << heap[i/2];
      }
      if(i*2<=size){
        cout << ", left key = " << heap[i*2];
        if(i*2+1<=size){
          cout << ", right key = " << heap[i*2+1];
        }
      }
      cout << ", " << endl;
    }
  }
};

int main(){
  int n; cin >> n;
  myheap h(n);

  int v;
  for(int i=0; i<n; i++){
    cin >> v;
    h.heap[i+1] = v;
  }

  h.print();

  return 0;
}

