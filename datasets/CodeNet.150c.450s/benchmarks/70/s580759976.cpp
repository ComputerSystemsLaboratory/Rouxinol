#include<cstdio>
#include<iostream>
using namespace std;
string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int zeller(int yeah,int month,int day)
{
  if(month <= 2)
    yeah--,month += 12;
  return (yeah + yeah/4 - yeah/100 + yeah/400 + (13 * month + 8) / 5 + day) % 7;
}

int main()
{
  int m,d;
  while(1)
    {
      scanf("%d %d",&m,&d);
      if(m+d == 0)break;
      int r = zeller(2004,m,d);
      cout << days[r] << endl;      
    }
  return 0;
}