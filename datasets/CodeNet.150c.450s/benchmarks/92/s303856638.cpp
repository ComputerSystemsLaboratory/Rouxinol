#include <iostream>
using namespace std;

int main()
{
  int a, b;
  while( cin >> a >> b ){
    int c = a + b;
    int nd = 1;
    while((c = c/10)){
      nd++;
    }
    cout << nd << endl;
  }
}