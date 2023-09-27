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

  int counts[100+1];
  memset(counts, 0, sizeof(counts));
  int num=0;
  while(cin >> num){
    counts[num]++;
  }

  int maxNum=0;
  REP(i,101)
    maxNum = max(maxNum,counts[i]);

  REP(i,101){
    if(counts[i]==maxNum){
      cout << i << endl;
    }
  }
}