#include<string>
#include<iostream>
#include<cctype>
using namespace std;

int main(){
  int a = 0; //a??????????????????????????????
  string str1, str2;
  cin >> str2;

  while (1) {
    cin >> str1;
    if (str1 == "END_OF_TEXT") break;
    for (int i = 0; i < str1.size(); i++) str1[i] = tolower(str1[i]);
    if (str1 == str2) a++;

  }

  cout << a << endl;

return 0;
}