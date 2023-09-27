#include <iostream>
#include "math.h"
#include <string>

using namespace std;

int n;

bool* data;

int getChar(char a) {
  if (a == 'A') 
    return 1;
  else if (a == 'C') 
    return 2;
  else if (a == 'G')
    return 3;
  else if (a == 'T')
    return 4;
  else
    return 0;
}

int getKey (string str) {
  int res = 0;

  int l = str.size();
  int p = 1;
  for (int i = 0; i < l; i++) {
    int v = getChar(str[i]);
    res += p * v;
    p *= 5;
  }
  return res;
}

void insert (string str) {
  int key = getKey(str);
  data[key] = true;
}

bool find (string str) {
  int key = getKey(str);
  return data[key];
}

int main() {
  int v = pow(5, 12);
  data = new bool[v];

  cin >> n;
  for (int i = 0; i < n; i++) {
    string cmd, str;
    
    cin >> cmd >> str;
    
    if (cmd == "insert") {
      insert(str);
    } else if (cmd == "find") {
      if (find(str)) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }
  return 0;
}