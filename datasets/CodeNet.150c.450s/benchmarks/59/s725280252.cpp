#include <iostream>

using namespace std;

int main(){

  int size;

  cin >> size;

  int *array = new int[size];

  for(int i = 0; i < size; i++){
    cin >> array[i];
  }

  for(int i = 0; i < size - 1; i++){
    cout << array[i] << " ";
  }
  cout << array[size - 1] << endl;

  int i, j, v, k;

  for(i = 1; i < size; i++){
    j = i - 1;
    v = array[i];
    while(j >= 0 && array[j] > v){
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = v;

    for(k = 0; k < size - 1; k++){
      cout << array[k] << " ";
    }
    cout << array[k] << endl;
  }

  delete[] array;
  return 0;
}
