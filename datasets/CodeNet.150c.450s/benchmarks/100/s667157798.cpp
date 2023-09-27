#include<iostream>
using namespace std;

int main(void){
  unsigned long n;
  cin >> n;
  for(int i = n; i > 2; i--){
    n = n * (i - 1);
  }
  cout << n << endl;
  return 0;
}