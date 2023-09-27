#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int week(int m,int d){

  struct tm t;
  t.tm_year  = 104; // 2004 - 1900
  t.tm_mon   = m-1;
  t.tm_mday  = d;
  t.tm_hour  = 0;           
  t.tm_min   = 0;               
  t.tm_sec   = 0;               
  t.tm_isdst = -1;
  
  if (mktime(&t) == -1)
	return (-1);
  return(t.tm_wday);
}

int main(){
  int m,d;
  static string w[] = {"Sunday","Monday","Tuesday","Wednesday",
					   "Thursday","Friday","Saturday"};
  while(cin >> m >> d,m||d){
  cout << w[week(m,d)] << endl;
  }
  return 0;
}