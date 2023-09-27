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

  map<string, int> counts;

  string str;
  int maxLen=0;
  while(cin >> str){
    counts[str]++;
    maxLen = max((int)str.size(), maxLen);
  }

  string maxLenStr="";
  string maxCountStr = "";
  int maxCount=0;
  map<string, int>::iterator it = counts.begin();
  for(it=counts.begin(); it!=counts.end(); it++){
    if(it->first.size() == maxLen)
      maxLenStr = it->first;
    int m = max(maxCount, it->second);
    if(m!=maxCount){
      maxCountStr = it->first;
      maxCount = m;
    }
  }

  cout << maxCountStr << " " <<  maxLenStr << endl;
}