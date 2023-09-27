#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int decode(string s) {

  int res=0,c=1;
  for(int i=0; i<s.length(); i++) {
    if( s.at(i) >= '2' && s.at(i) <= '9' ) c = s.at(i) - '0';
    else if( s.at(i) == 'm' ) {
      res += c*1000;
      c = 1;
    }else if( s.at(i) == 'c' ) {
      res += c*100;
      c = 1;
    }else if( s.at(i) == 'x' ) {
      res += c*10;
      c = 1;
    }else if( s.at(i) == 'i' ) {
      res += c;
      c = 1;
    }
  }

  return res;

}

string encode(int i) {

  stringstream ss;
  string res = "";

  if( i >= 1000 ) {
    if( i/1000 >= 2 ) {
      ss << i/1000;
      res += ss.str();
    }
    res += "m";
    ss.str("");
    i %= 1000;
  }
  if( i >= 100 ) {
    if( i/100 >= 2 ) {
      ss << i/100;
      res += ss.str();
    }
    res += "c";
    ss.str("");

    i %= 100;
  }
  if( i >= 10 ) {
    if( i/10 >= 2 ) {
      ss << i/10;
      res += ss.str();
    }
    res += "x";
    ss.str("");

    i %= 10;
  }

  if( i != 0 ) {
    if( i >= 2 ) {
      ss << i;
      res += ss.str();
    }
    res += "i";
    ss.str("");
  }

  return res;
}

int main() {

  int m;
  cin>>m;
  string r,l;

  while(m--) {
    cin>>r>>l;

    cout<<encode(decode(r) + decode(l))<<endl;
  }
}