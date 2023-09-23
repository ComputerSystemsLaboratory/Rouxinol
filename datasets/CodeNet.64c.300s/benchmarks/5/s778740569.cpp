#include <iostream>
using namespace std;

int main(){
  int Mt[10];
  int s;
  int i, j;
  for (i = 0; i <= 9; i++){
    cin >> Mt[i];
  }

  for (i = 1; i <= 3; i++){
    for (j = 8; j >= 0; j--){
      if (Mt[j] <= Mt[j + 1]){
        s = Mt[j];
        Mt[j] = Mt[j + 1];
        Mt[j + 1] = s;
      }
    }
  }

  for (i = 0; i <= 2; i++){
    cout << Mt[i] << "\n";
  }
  return (0);
}