#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
  string str;
  cin >> str;

  stack<int> bs_index;          // Index of backslash(\)
  stack<pair<int, int>> puddle; // (index, area)

  int total_area = 0;
  for (int i = 0; i < (int)str.length(); ++i)
  {
    switch (str[i])
    {
      case '\\':
      {
        bs_index.push(i);
        break;
      }
      case '/':
      {
        if (!bs_index.empty()) // Corresponding backslach(\) is found
        {
          int j = bs_index.top();
          int area = i - j;
          bs_index.pop();

          while (!puddle.empty() && j < puddle.top().first) // Integratable puddle is found
          {
            area += puddle.top().second; // Integrate the puddle
            puddle.pop();
          }

          puddle.push(pair<int, int>(j, area)); // Add new puddle
          total_area += (i - j);                 // Add to total area
        }
        break;
      }
      default:
        break;
    }
  }

  cout << total_area << endl;

  int num_of_puddles = puddle.size();

  string result;
  for (int i = 0; i < num_of_puddles; ++i)
  {
    result = ' ' + to_string(puddle.top().second) + result;
    puddle.pop();
  }
  cout << num_of_puddles << result << endl;

  return 0;
}

