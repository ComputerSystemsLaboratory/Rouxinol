#include<iostream>
using namespace std;

char s[10][10] = {
  {},
  {'.', ',', '!', '?', ' '},
  {'a', 'b', 'c'},
  {'d', 'e', 'f'},
  {'g', 'h', 'i'},
  {'j', 'k', 'l'},
  {'m', 'n', 'o'},
  {'p', 'q', 'r', 's'},
  {'t', 'u' , 'v'},
  {'w', 'x', 'y', 'z'}
};

int main()
{
  int set;
  cin >> set;
  for(int cn = 0; cn < set; cn++)
  {
    string a;
    cin >> a;
    int n = 0;
    char c = '0';
    for(int i = 0; i < a.length(); i++)
    {
      if(a[i] != '0')
      {
        c = a[i];
        n++;
      }
      else
      {
        if(c != '0')
        {
          n--;
          int cc = c - '0';
          switch(cc)
          {
            case 0: break;
            case 1: cout << s[cc][n % 5]; break;
            case 2: case 3: case 4: case 5: case 6: case 8: cout << s[cc][n % 3]; break;
            case 7: case 9: cout << s[cc][n % 4]; break;
          }
        }
        n = 0;
        c = '0';
      }
    }
    cout << endl;
  }
}