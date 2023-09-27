#include <iostream>
using namespace std;

int main()
{
  int n;

  while(cin >> n && n != 0){
    int cnt = 0;
    n = 1000 - n;
    if (n >= 500){
      cnt++;
      n -= 500;
    }
    while (n >= 100){
      cnt++;
      n -= 100;
    }
    if (n >= 50){
      cnt++;
      n -= 50;
    }
    while (n >= 10){
      cnt++;
      n -= 10;
    }
    if (n >= 5){
      cnt++;
      n -= 5;
    }
    while (n--){
      cnt++;
    }

    cout << cnt << endl;
  }

  return 0;
}