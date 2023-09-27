#include <iostream>
#include <string>
using namespace std;

string print(string str, int a, int b){
  return str.substr(a, b-a+1);
}

string reverse(string str, int a, int b){
  string sub;
  for (int i = 0; i < b-a+1; i++) {
    sub[i] = str[b-i];
  }
  for (int i = 0; i < b-a+1; i++) {
    str[a+i] = sub[i];
  }
  return str;
}

string replace(string str, int a, int b, string p){
  return str.replace(a, b-a+1, p);
}

int main() {
  int q;
  string str;

  cin >> str;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int a, b;
    string command, p;
    cin >> command;
    if (command == "print"){
      cin >> a >> b;
      cout << print(str, a, b) << endl;
    }
    else if (command == "reverse"){
      cin >> a >> b;
      str = reverse(str, a, b);
    }
    else if (command == "replace"){
      cin >> a >> b >> p;
      str = replace(str, a ,b ,p);
    }
  }
  return 0;
}