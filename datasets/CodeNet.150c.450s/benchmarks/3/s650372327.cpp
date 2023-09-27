#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
  string str;
  cin >> str;
  int count;
  cin >> count;
  for(int i = 0; i < count; i++){
    string command;
    cin >> command;
    if (command == "replace"){
      int first,last;
      string replace_str;
      cin >> first >> last >> replace_str;
      str.replace(first, last - first + 1, replace_str);
    }else if(command == "reverse"){
      int first,last;
      cin >> first >> last;
      reverse(str.begin() + first, str.begin() + last + 1);
    }else if(command == "print"){
      int first, last;
      cin >> first >> last;
      cout << str.substr(first,last - first + 1) << endl;
    }
  }
  return 0;
}