#include<iostream>
using namespace std;

int parent(int i){return i/2;}
int left(int i){return i*2;}
int right(int i){return i*2 + 1;}

int main(){
  int h;
  cin >> h;
  int key;
  int T[h + 1];
  for ( int i = 1; i <= h; i++){
    cin >> key;
    T[i] = key;
  }

  for ( int i = 1; i <= h; i++){
    cout << "node " << i << ": " << "key = " << T[i] << ", ";
    if ( parent(i) >= 1  ){
      cout << "parent key = " << T[parent(i)] << ", ";
    }
    if ( left(i) <= h){
      cout << "left key = " << T[left(i)] << ", ";
    }
    if ( right(i) <= h){
      cout << "right key = " << T[right(i)] << ", ";
    }
    cout << endl;
  }

  return 0;
}
