#include <iostream>
using namespace std;

int appear[100];

int main(void){
  int input, max = 0, count = 0;
  while(cin >> input){
    appear[input-1]++;
    count++;
  }
  for(int i = 0 ; i < count; i++){
    if(appear[i] > max){
      max = appear[i];
    }
  }
  for(int i = 0; i < count; i++){
    if(appear[i] == max)  cout << i + 1 << endl;
  }
  return 0;
}