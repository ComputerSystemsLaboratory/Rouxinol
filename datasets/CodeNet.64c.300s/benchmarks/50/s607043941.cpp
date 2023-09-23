#include <iostream>

using namespace std;

int main(){

  int size;

  cin >> size;

  int *array = new int[size];

  for(int i = 0; i < size; i++){
    cin >> array[i];
  }

  int temp, count = 0, flag = 1, i = 0;

  while(flag){
    flag = 0;
    for(int j = size - 1; j >= i + 1; j--){
      if(array[j] < array[j - 1]){
        temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
        flag = 1;
        count++;
      }
    }
    i++;
  }

  for(int i = 0; i < size - 1; i++){
    cout << array[i] << " ";
  }
  cout << array[size - 1] << endl;

  cout << count << endl;

  delete[] array;
  return 0;
}
