//string ver
#include<iostream>
#include<string> //s.size()
#include<cctype> //toupper

using namespace std;

string toUpper(string s);

int main(){
  string w,t; //word, text
  int c=0;
  
  cin >> w;
  w = toUpper(w);
  while (1) {
    cin >> t;
    if (t == "END_OF_TEXT") break;
    t = toUpper(t); //string 自作でやらんと
    if (w == t) c++; 
  }
  cout << c << endl;
}

string toUpper(string s) {
  string t = s;
  for ( int i = 0; i < s.size(); i++) {
    t[i] = toupper(s[i]);
  }
  return t;
}
