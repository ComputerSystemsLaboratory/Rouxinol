#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<string> split(const string& s, char delim) {
  vector<string> elems;
  stringstream ss(s);
  string item;
  while(getline(ss, item, delim)) {
    if(!item.empty()) {
      elems.push_back(item);
    }
  }
  return elems;
}

void print(string str, string a, string b) {
  int ai = atoi(a.c_str());
  int bi = atoi(b.c_str());
  for(int i = ai; i <= bi; i++)
    cout << str[i];
  cout << endl;
}

string reverse(string str, string a, string b) {
  int ai = atoi(a.c_str());
  int bi = atoi(b.c_str());
  string result = "";
  int cnt = 0;
  string temp = "";
  for(int i = ai; i <= bi; i++)
    temp += str[i];
  for(int i = 0; i < str.length(); i++) {
    if(i >= ai && i <= bi)
      result += temp[bi - i];
    else
      result += str[i];
  }
  return result;
}

string replace(string str, string a, string b, string item) {
  int ai = atoi(a.c_str());
  int bi = atoi(b.c_str());
  string result = "";
  int cnt = 0;
  for(int i = 0; i < str.length(); i++) {
    if(i >= ai && i <= bi)
      result += item[cnt++];
    else
      result += str[i];
  }
  return result;
}

int main(void) {
  vector<string> elems;
  string str,io;
  int q;
  cin >> str;
  cin >> q;
  cin.ignore();
  for(int i = 0; i < q; i++) {
    getline(cin, io);
    elems = split(io, ' ');
    if(elems[0] == "print")
      print(str, elems[1], elems[2]);
    else if(elems[0] == "reverse")
      str = reverse(str, elems[1], elems[2]);
    else if(elems[0] == "replace")
      str = replace(str, elems[1], elems[2], elems[3]);
  }
  return 0;
}