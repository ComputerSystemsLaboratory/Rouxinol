#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX 2000000

class PriorityQueue{
  public:
  int size;
  int buffer[MAX+1];

  PriorityQueue(){
    size = 0;
  }

  
  void insert(int x){  
    size++;
    buffer[size] = x;
    upHeap(size); 
  }

  int get(){
    int v = buffer[1];
    buffer[1] = buffer[size];
    size--;
    downHeap(1);
    return v;
  }

  private:
  void upHeap(int cursor){   
    int parent;

    while(1){ 
      parent = cursor / 2;
      if( parent < 1 ) break;
      
      if( buffer[parent] < buffer[cursor] ){
	swap( buffer[parent],buffer[cursor]);
      }else break;

      cursor = parent;
    }
  }

  void downHeap( int cursor ){
    int child;

    while(1){
      if( cursor > size / 2 ) break;

      child = cursor * 2;
      if( child < size && buffer[child] < buffer[child+1]){
	child++;
      }

      if( buffer[cursor] < buffer[child] ){
	swap( buffer[cursor],buffer[child]);
      }else break;

      cursor = child;
    }
  }
};

int main(void){
  PriorityQueue PQ = PriorityQueue();
  int x;
  string command;

  while(1){
    cin >> command;

    if( command == "insert" ){
      cin >> x;
      PQ.insert(x);
    }else if(command == "extract" ){
      cout << PQ.get() << endl;
    }else break;
  }

  return 0;
}