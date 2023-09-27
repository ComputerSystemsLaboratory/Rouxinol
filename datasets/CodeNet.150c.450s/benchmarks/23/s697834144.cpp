#include <iostream>

using namespace std;

int main(){
  long long int a = 1, b = 1;
  int n; cin >> n;

  for(int i=0;i<n;++i){
    long long int c = a + b;
    a = b;
    b = c;
  }
  cout << a << endl;

  return 0;
}