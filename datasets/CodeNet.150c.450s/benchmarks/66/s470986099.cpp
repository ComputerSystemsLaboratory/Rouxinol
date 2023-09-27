#include <iostream>
#include <string>
using namespace std;

bool search(string* array, int length,  string target)
{
  string array_last = array[length - 1];
  array[length - 1] = target;
  
  int i;
  for (i = 0; array[i] != target; i++)
  {
  }
  array[length - 1] = array_last;
  if (i < length-1)
  {
    return true;
  }
  else if (array_last == target)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(void)
{
  bool open = false;
  int n;
  cin >> n;
  string* u = new string[n];
  for (int i = 0; i < n; i++)
  {
    cin >> u[i];
  }

  int m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    string t;
    cin >> t;
    if (search(u, n, t) )
    {
      if (open)
      {
        cout << "Closed by ";
      }
      else
      {
        cout << "Opened by ";
      }
      open = !open;
    }
    else
    {
      cout << "Unknown ";
    }
    cout << t << endl;
  }

  delete[] u;
  return 0;
}