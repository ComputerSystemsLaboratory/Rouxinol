#include <iostream>
#include <string>
#include <locale>
#include <map>

using namespace std;

int main()
{
  locale loc;
  map<char, int> m;
  for (int i = 97; i <= 122; i++)
    m.insert(make_pair((char)i, 0));

  char c;
  while (cin >> c)
  {
    if (isupper(c, loc))
      c = tolower(c, loc);
    if (islower(c, loc))
      m.at(c)++;
  }

  for (int i = 97; i <= 122; i++)
    cout << (char)i << " : " << m.at((char)i) << endl;
  return 0;
}