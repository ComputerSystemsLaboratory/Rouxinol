#include <iostream>
using namespace std;

int main()
{
  int n;
  int m = 100000;
  cin >> n;
  for(int i = 0; i < n; i++){
    m += m / 20;
    if(m % 1000){
      m += 1000 - m % 1000;
    }
  }
  cout << m << endl;
}