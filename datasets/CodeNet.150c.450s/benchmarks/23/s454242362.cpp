#include <iostream>
using namespace std;
#define MAX 45

int main(){
  int fibo[MAX];
  int n;
  fibo[0] = fibo[1] = 1;
  for(int i = 2; i < MAX; i++)
    fibo[i] = fibo[i-1] + fibo[i-2];

  cin >> n;
  cout << fibo[n] << endl;
}