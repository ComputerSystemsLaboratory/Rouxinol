#include <iostream>

using namespace std;
int main() {
  int i, j;
  cin >> i;
  long long int array[i-1], sum, max, min;
  sum = 0;
  for (j = 0; j < i ; j++){
    cin >> array[j];
    sum += array[j];
  }
  min = array[0];
  max = array[0];
  for (j = 0; j < i; j++) {
    if (min > array[j]) {
      min = array[j];
    } else if (max < array[j]) {
      max = array[j];
    }
  }
  cout << min << " " << max << " " << sum << endl;
}   