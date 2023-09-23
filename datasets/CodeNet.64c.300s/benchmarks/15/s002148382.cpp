#include <iostream>

using namespace std;

int main(){

  int size;

  cin >> size;

  int *array = new int[size];

  for(int i = 0; i < size; i++){
    cin >> array[i];
  }

  int min, minj, count = 0, temp;

  for(int i = 0; i < size - 1; i++){
    min = array[i];
    minj = i;
    for(int j = i + 1; j < size; j++){
      if(min > array[j]){
        min = array[j];
        minj = j;
      }
    }
    if(minj != i){
      temp = array[i];
      array[i] = array[minj];
      array[minj] = temp;
      count++;
    }
  }

  for(int i = 0; i < size - 1; i++){
    cout << array[i] << " ";
  }
  cout << array[size - 1] << endl;

  cout << count << endl;

  delete[] array;
  return 0;
}

