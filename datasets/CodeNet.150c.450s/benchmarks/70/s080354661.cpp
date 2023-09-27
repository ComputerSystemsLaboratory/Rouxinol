#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cstring>
#include <map>
#include <cctype>
#include <string>
#include <cstdlib>
#include <math.h>
using namespace std;

#define REP(i,n)  for(int i=0; i<n; i++)

int main()
{
  cout << setprecision(6);
  cout << setiosflags(ios::scientific);
  cout.flags(ios::fixed);

  int dates[] = {31,29,31,30,31,    30,31,31,30,31, 30,31};
  while(true){
    int m, d;
    cin >> m >> d;
    if(m==0 && d==0)
      break;

    int days=3;
    REP(i,m-1)
      days += dates[i];
    days+=d-1;

    string str="";
    switch(days%7){
    case 0:str = "Monday"; break;
    case 1:str = "Tuesday";break;
    case 2:str = "Wednesday";break;
    case 3:str = "Thursday";break;
    case 4:str="Friday";break;
    case 5:str="Saturday";break;
    case 6:str="Sunday";break;
    }
    cout << str << endl;
  }
}