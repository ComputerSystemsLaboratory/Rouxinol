#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int arr[5];
  for(int i=0; i<5; i++){
    cin >> arr[i];
  }
  sort(arr,arr+5);
  for(int i=0; i<5; i++){
    cout << arr[4-i];
    cout << (i == 4 ? '\n' : ' ');
  }
  return 0;
}