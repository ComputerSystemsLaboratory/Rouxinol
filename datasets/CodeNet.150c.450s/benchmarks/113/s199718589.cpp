#include <iostream>
using namespace std;
int main() {
  int i = 0;
  int x;
  do{
    cin >> x;
    i++;
    if(x != 0)
      cout << "Case " << i << ": " << x << "\n";
  } while(x != 0);
}