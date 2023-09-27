#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_M = 100000000;

char find_replace(vector<pair<char,char> > &table, const char &c)
{
  vector<pair<char,char> >::iterator fit;
  int n = table.size();

  int l=0, r=n;
  while (r-l>=1)
  {
    int i = (l+r)/2;
    char k = table[i].first;
    if (k == c)
    {
      return table[i].second;
    }
    else if (k < c) l = i+1;
    else r = i;
  }
  return ' ';
}

int main()
{
  int n, m;
  char b, a, c;


  while (cin >> n)
  {
    if (n==0) return 0;

    vector<pair<char,char> > table;
    string str;

    for (int i=0; i<n; i++)
    {
      cin >> b >> a;
      table.push_back(make_pair(b, a));
    }
    cin >> m;
    for (int i=0; i<m; i++)
    {
      cin >> c;
      str.push_back(c);
    }

    sort(table.begin(), table.end());
    for (int i=0; i<str.length(); i++)
    {
      c = find_replace(table, str[i]);
      if (c != ' ')
      {
        str[i] = c;
      }
    }
    cout << str << endl;
  }
}