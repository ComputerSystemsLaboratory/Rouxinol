#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string toUpper(string s){
 string t = s;
 for(int i = 0; i < s.size(); i++){
  t[i] = toupper(s[i]);
 }

 return t;
}

int main(){
 int count = 0;
  string w, str;

  cin >> w >> str;
  w = toUpper(w);
  str = toUpper(str);

  while (1){
   if (str == w)
    count++;

   cin >> str;
   if(str == "END_OF_TEXT") break;
   str = toUpper(str);
  }

  cout << count << endl;

  return 0;
}