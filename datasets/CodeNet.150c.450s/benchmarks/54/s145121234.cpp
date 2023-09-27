#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string chara(string s)
{
  int i;
  int len = s.size();
  string upstr = s;
  for (i = 0; i < len; i++){
    upstr[i] = toupper(s[i]);
  }
  return upstr;
}

int main(void)
{
  int count = 0;
  string w, input;
  cin >> w;
  while (1) {
    cin >> input;
    if (input == "END_OF_TEXT") break;
    if (chara(input) == chara(w)) count++;
  }
  cout << count << endl;
  return 0;
}