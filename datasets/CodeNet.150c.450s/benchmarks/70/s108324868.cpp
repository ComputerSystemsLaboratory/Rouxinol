#include<iostream>
#include<string>
using namespace std;
const string day[] = {"Thurs", "Fri", "Satur", "Sun", "Mon", "Tues", "Wednes"};

int main(){
  int m, d;
  while(cin >> m >> d, m != 0 || d != 0) {
    int days = d - 1;
    for(int i = 1; i < m; i++) { 
    if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)  days += 31;
    else if(i == 4 || i == 6 || i == 9 || i == 11) days += 30;
    else days += 29;
    }
    cout << day[days % 7] << "day" << endl;
  }
  return 0;
}
      