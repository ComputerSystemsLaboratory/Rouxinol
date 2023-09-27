#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int d[100];
int m;

int main()
{
  int i = 0;
  int dd;
  while(cin >> dd)
  {
    d[dd]++;
    m = max(m, d[dd]);
    i++;
  }
  for(int i = 0; i < 100; i++)
  {
    if(m == d[i])
      cout << i << endl;
  }
  return 0;
}