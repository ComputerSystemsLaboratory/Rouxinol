#include<iostream>
#include<string>
using namespace std;

int main(void){
  int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
  string day[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", 
		   "Tuesday", "Wednesday"};

  int x, y, m, d, c;

  while(cin >> x >> y , x != 0){
    m = d = 1;
    c = 0;
    while(x !=m || y != d){
      d++;
      if(d > month[m - 1]){
	m++;
	d = 1;
      }
      c++;
      if(c == 7)
	c = 0;
    }
    cout << day[c] << endl;
  }

  return 0;
}