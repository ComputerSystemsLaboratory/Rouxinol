#include <iostream>
using namespace std;

int main()
{
  int first = 0, second = 0, third = 0;
  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;
    if (n > first) {
      third = second;
      second = first;
      first = n;
    } 
    else if(n > second) {
      third = second;
      second = n;
    }
    else if(n > third) {
      third = n;
    }
  }
  cout << first << "\n" << second << "\n" << third << endl;
  return 0;
}