#include<iostream>
using namespace std;
int main()
{
  int week,bal=100000,i,flg;
  cin >> week;
  for(i=0;i<week;i++)
  {
    flg = 0;
    bal = bal * 1.05;
    if(bal % 1000 == 0)
    flg = 1;
    bal /= 1000;
    bal *= 1000;
    if(!flg)
    bal += 1000;
  }
  cout << bal << endl;
  return 0;
}