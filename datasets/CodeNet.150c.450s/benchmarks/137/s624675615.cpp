#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;

enum Command {
  INSERT,
  FIND
};

int main(){
  int n;
  int which_command;
  unordered_set <string> A;
  string word;
  cin >> n;
  for (int i=0; i<2*n; i++){
    cin >> word;
    if (word == "insert") {
        which_command = INSERT;
    } else if (word == "find") {
        which_command = FIND;
    } else {
      switch (which_command){
        case INSERT:
          A.insert(word);
          break;
        case FIND:
          if (A.count(word) > 0)
            cout << "yes" << endl;
          else
            cout << "no" << endl;
          break;
        default:
          break;
      }
    }
  }
  return 0;
}