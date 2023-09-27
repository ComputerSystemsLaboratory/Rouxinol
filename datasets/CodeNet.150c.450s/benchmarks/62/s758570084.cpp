#include <iostream>
using namespace std;

int main() {
  int input[3];  

  cin >> input[0] >> input[1] >> input[2];

  int tmp;
  if(input[0] > input[1]) {
    tmp = input[1];
    input[1] = input[0];
    input[0] = tmp;
  }
  if(input[2] < input[0]) {
    tmp = input[0];
    input[0] = input[2];
    input[2] = tmp;
  }    
  if(input[1] > input[2]) {
    tmp = input[2];
    input[2] = input[1];
    input[1] = tmp;
  }
  
  cout << input[0] << " " << input[1]<< " " << input[2] << endl;
  return 0;
}