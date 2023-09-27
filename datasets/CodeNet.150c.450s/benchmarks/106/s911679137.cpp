#include <iostream>
using namespace std;

int main() {
  int a,b,c, num = 0;
  do{
    cin >> a >> b >> c;
  } while(a>b);
  for(int i = a; i <= b; i++){
    if(c%i==0)
      num++;
  }
  cout << num << "\n";
}