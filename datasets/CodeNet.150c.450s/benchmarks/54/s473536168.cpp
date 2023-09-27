#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
  locale loc;
  string pattern, text;
  cin >> pattern;
  for (auto &n : pattern)
    n = tolower(n, loc);

  int count = 0;
  while (cin >> text && text != "END_OF_TEXT")
  {
    for (auto &n : text)
      n = tolower(n, loc);
    if (text == pattern)
      count++;
  }
  cout << count << endl;
  return 0;
}