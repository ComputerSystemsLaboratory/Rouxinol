#include<iostream>
using namespace std;

int getDigit(int in) {
  int threshold = 10;
  for(int i=0; i<10; i++) {
    if(in < threshold) return i+1;
    threshold *= 10;
  }
  return -1;
}

int main(){
  int in1,in2;

  while( cin >> in1 >> in2 ) {
    cout << getDigit(in1+in2) << endl;
  }

  return 0;
}