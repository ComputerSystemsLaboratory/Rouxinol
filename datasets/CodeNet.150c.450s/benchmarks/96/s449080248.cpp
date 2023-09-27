#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>
#include <string>

using namespace std;

int main() {

  int t;
  cin >> t;
  array<array<char, 5>, 10> table{ { {}, { '.', ',', '!', '?', ' ' }, { 'a', 'b', 'c' }, { 'd', 'e', 'f' }, { 'g', 'h', 'i' }, { 'j', 'k', 'l' }, { 'm', 'n', 'o' }, { 'p', 'q', 'r', 's' }, { 't', 'u', 'v' }, { 'w', 'x', 'y', 'z' } } };
  array<int, 10> sizes = {0, 5, 3, 3, 3, 3, 3, 4, 3, 4};
  
  for (int i = 0; i < t; i++){
    string line;
    cin >> line;
    int counter = -1;
    int type = -1;
    for(const char& ch : line){
      if(ch == '0'){
	if (type >= 0) {
	  cout << table[type][counter % sizes[type]];
	  type = -1;
	  counter = -1;
	}
      } else {
	type = ch - '0';
	counter++;
      }
    }
    cout << endl;
  } 
}