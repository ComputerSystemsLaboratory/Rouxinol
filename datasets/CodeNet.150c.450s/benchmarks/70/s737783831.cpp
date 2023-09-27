#include <iostream>
#include <cstdio>

using namespace std;

int mday[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string cal[] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday" ,"Saturday" ,"Sunday"};

int main()
{
  int month, day;
  while (scanf("%d %d ", &month, &day) == 2) {
    if (month == 0 && day == 0) {break;}
    int sumday = 0;
    for (int i = 0; i < month - 1; i++) {
      sumday += mday[i];
    }
    sumday += day;
    cout << cal[(sumday + 2) % 7] << endl;
  }
  return 0;
}