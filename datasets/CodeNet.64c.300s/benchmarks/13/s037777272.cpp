#include <iostream>

using namespace std;

#define MAX 45
int array[MAX];

void setNumber(int n) {
  array[0] = 1;
  array[1] = 1;
  for(int i = 2; i < n + 1; i++) {
    array[i] = array[i - 1] + array[i - 2];
  }
}


int main(void) {
  int n;
  cin >> n;

  setNumber(n);
  cout << array[n] << endl;

  return 0;
}