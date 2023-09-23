#include <iostream>
using namespace std;

int main(){
  int seconds, minutes, hours;

  cin >> seconds;
  minutes = seconds / 60;
  hours = minutes / (60); 
  minutes = minutes % 60;
  cout << hours << ":" << minutes << ":" << seconds%60 << endl;
  
  return 0;
}