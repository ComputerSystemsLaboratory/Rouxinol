#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
 map<char, int> data;
 for(auto c = 'a'; c <= 'z'; c++) {
    data[c] = 0;
 }
 string str;
 while(cin >> str) { 
  for(string::iterator it = str.begin(); str.end() != it; ++it) {
    char c = *it;
    if(c >= 'A' && c <= 'Z') {
      c = (char)(c + 32);
      data[c] += 1;
    } else if (c >= 'a' && c <= 'z') {
      data[c] += 1;
    }
  }
 }
 for(auto it = data.begin(); it != data.end(); ++it ){ 
  cout << it->first << " : " << it->second << endl;
  }

}