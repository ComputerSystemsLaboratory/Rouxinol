#include<iostream>
#include<string>

using namespace std;

string days[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
int monthdays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
  int day, month;
  while(1)
  {
    cin >> month >> day;
    if(!month)
      break;

    for(int i = 1; i < month; i++)
      day += monthdays[i];

    cout << days[day % 7] << endl;
  }
  return 0;
}