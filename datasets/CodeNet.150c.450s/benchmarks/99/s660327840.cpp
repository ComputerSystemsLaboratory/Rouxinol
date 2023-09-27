#include<iostream>
#include<sstream>
#include<string>
#include<cmath>
using namespace std;

int to_int(string s)
{
  int num = 0;
  int m = 1;
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] >= '0' && s[i] <= '9')
      m = s[i] - '0';
    else
    {
      switch(s[i])
      {
        case 'm':
          num += m * 1000;
          break;
        case 'c':
          num += m * 100;
          break;
        case 'x':
          num += m * 10;
          break;
        case 'i':
          num += m;
          break;
      }
      m = 1;
    }
  }
  return num;
}

string mcxi = "ixcm";
string to_mcxi(int num)
{
  string s;
  stringstream ss;
  int n;
  for(int i = 3; i >= 0; i--)
  {
    n = num / (int)pow(10, i);
    num %= (int)pow(10, i);
    if(n == 1)
      ss << mcxi[i];
    else if(n > 1)
      ss << n << mcxi[i];
  }
  ss >> s;
  return s;
}

int main()
{
  int n;
  string a, b;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> a >> b;
    cout << to_mcxi(to_int(a) + to_int(b)) << endl;
  }
}