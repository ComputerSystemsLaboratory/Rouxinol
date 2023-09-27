#include <iostream>
using namespace std;

int main(void){
  int heap[251];
  int h;
  cin >> h;
  for (int i=1;i<=h;++i)
    cin >> heap[i];
  for (int i=1;i<=h;++i){
    cout << "node " << i << ": key = " << heap[i] << ", ";
    if (i!=1)  cout << "parent key = " << heap[i/2] << ", ";
    if (2*i <= h) cout << "left key = " << heap[2*i] << ", ";
    if (2*i+1 <= h) cout << "right key = " << heap[2*i+1] << ", ";
    cout << endl;
  }
}

