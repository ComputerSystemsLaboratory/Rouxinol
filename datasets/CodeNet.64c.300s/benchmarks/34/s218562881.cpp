#include <iostream>
#include <algorithm>
using namespace std;


void print_array(int array[],int array_num) {
  for(int i=0;i<array_num-1;i++) {
    cout << array[i] << " ";
  }
  cout << array[array_num-1] << endl;
}

void insertion_sort(int array[],int N) {
  int target;
  for (int i=1;i<N;i++) {
    target = array[i];
    int j = i-1;
    while(j >= 0 && array[j] > target) {
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = target;
    print_array(array,N);
  }
}

int main() {
  int N_MAX = 100;
  int N;
  int array[100];

  /* input */
  cin >> N;
  for(int i=0;i<N;i++) {
    cin >> array[i];
  }
  // ??????
  array[N] = -1;

  /* code here */
  print_array(array,N);
  insertion_sort(array,N);

  return 0;
}