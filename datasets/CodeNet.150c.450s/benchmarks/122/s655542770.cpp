#include <queue> 
#include <string> 
#include <iostream> 
#include <cstdlib>
using namespace std; 
int main() {
  priority_queue<int> Q;
  string word;
  int num;
  
  while (cin >> word) {
    if (word == "insert") {
      
    }
    else if (word == "extract") {
      num = Q.top();
      cout << num << endl;
      Q.pop();
    }
    else if (word == "end") {

    }
    else {
      num = atoi(word.c_str());
      Q.push(num);
    }
  }
}