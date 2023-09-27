#include<iostream>
#include<map>

using namespace std;

int main() {
  map<int, int> num;

  int n = 0;
  while(cin >> n){
    //if(n == -1) break;
    num[n]++;
  }

  int max = 0;
  int max_i = 0;
  map<int, int>::iterator it = num.begin();
  for(; it != num.end(); it++) {
    if(it->second > max_i) {
      max = it->first;
      max_i = it->second;
    }
  }

  for(it = num.begin(); it != num.end(); it++) {
    if(max_i == it->second) {
      cout << it->first << endl;
    }
  }

  return 0;
}