#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> trains;
  int i;
  do
  {
    cin >> i;
    if (i != 0) trains.push(i);
    else
    {
      if (trains.empty()) break;
      cout << trains.top() << endl;
      trains.pop();
    }
  } while (true);
  return 0;
}