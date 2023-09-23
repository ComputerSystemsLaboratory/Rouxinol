#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

#define THR 200
#define OTH 195

int main(void)
{
  int n;
  cin >> n;
  int y[n], m[n], d[n];
  for (int i = 0; i < n; i++)
    cin >> y[i] >> m[i] >> d[i];


  for (int i = 0; i < n; i++) {
    int date;
    int ninet = 0;
    int twe = 0;
    
    //d??????
    //y???3??§?????????
    if (y[i]%3 == 0) {
      date = 21 - d[i];
      twe = 10 - m[i];
    }
    //y???3??§????????????
    else {
      //m???2??§?????????
      if (m[i]%2 == 0) {
	date = 20 - d[i];
	int tmp = (10-m[i])/2;
	twe = tmp;
	ninet = tmp;
      }
      //m???2??§????????????
      else {
	date = 20 - d[i];
	int tmp = (10-m[i])/2;
	twe = 10-m[i]-tmp;
	ninet = tmp;
      }
    }
    twe *= 20;
    ninet *= 19;
    
    int year = 0;
    //?¬????y
    for (int j = y[i]+1; j < 1000; j++) {
      if (j%3 == 0)
	year += THR;
      else
	year += OTH;
    }
    cout << year+twe+ninet+date << endl;
  }
  
  return 0;	
}