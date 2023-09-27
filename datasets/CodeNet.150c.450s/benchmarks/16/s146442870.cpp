#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct Puddle
{
  int start;
  int end;
  int area;
};

int main()
{
  string str;
  cin >> str;

  stack<int> st;
  stack<Puddle> puddles;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '\\')
      st.push(i);
    else if (str[i] == '/' && !st.empty())
    {
      int start = st.top();
      st.pop();

      Puddle cur = {start, i, i - start};

      while (!puddles.empty() &&
             start < puddles.top().start && puddles.top().end < i)
      {
        cur.area += puddles.top().area;
        puddles.pop();
      }

      puddles.push(cur);
    }
  }

  int sum_of_area = 0;
  int count = 0;
  string s = "";
  while (!puddles.empty())
  {
    Puddle p = puddles.top();
    puddles.pop();
    sum_of_area += p.area;
    s = to_string(p.area) + s;
    count++;

    if (puddles.empty())
      break;
    else
      s = " " + s;
  }

  cout << sum_of_area << endl;
  cout << count;
  if (s.length() > 0)
    cout << " " << s;
  cout << endl;
  return 0;
}