#include<string>
#include<iostream>
#include<cctype>
using namespace std;

string toUpper(string s){
  string t = s;
  for (int i = 0; i < s.size(); i++)
    t[i] = toupper(s[i]);

    return t;
}

int main(){
  int a = 0; //a??????????????????????????????
  string str1, str2;
  cin >> str2;
  str2 = toUpper(str2);

  while (1) {
    cin >> str1;
    if (str1 == "END_OF_TEXT") break;
    str1 = toUpper(str1);

    if (str1 == str2) a++;

  }

  cout << a << endl;

return 0;
}