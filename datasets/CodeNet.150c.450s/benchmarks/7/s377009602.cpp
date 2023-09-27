#include<iostream>
using namespace std;

int main() {
  int array[10], tmp;

  for (int i = 0; i < 10; i++) {
    cin >> array[i];
  }

  for (int j = 0; j < 10; j++) {
    for (int k = 0; k < 9; k++) {
      if (array[k] < array[k+1]) {
        tmp = array[k];
        array[k] = array[k+1];
        array[k+1] = tmp;
      }
    }
  }

  for(int l = 0; l < 3; l++) {
    cout << array[l] << endl;
  }

  return 0;
}