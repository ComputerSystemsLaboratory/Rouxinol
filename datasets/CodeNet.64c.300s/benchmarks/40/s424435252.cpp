#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>

using namespace std;

struct tochange{
 int operator()(int word){
   int result;

   if (isupper(word) != 0) {
     result=tolower(word);
   } else {
     result=toupper(word);
   }
   return result;
 }
};

int main(){
  string s;
  //cin >> s;
  getline(cin, s);
  transform(s.begin(), s.end(), s.begin(), tochange());
  cout << s << endl;
  return 0;
}

