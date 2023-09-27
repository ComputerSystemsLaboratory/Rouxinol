#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <string>

using namespace std;

int main()
{
  string s[1001], ms, fs, ss;
  int m = 0, c, i = 0;
  getline(cin, ss);
  stringstream gs(ss);
  while(gs >> s[i]){
    if(s[i].size() > m){
      m = s[i].size();
      ms = s[i];
    }
    i++;
  }
  for(i = 0, c = 0; i < 1001; i++){
    for(int j = i + 1; j < 1001; j++){
      if(s[i].compare(s[j]) == 0){
	int nc = 0;
	nc++;
	if(nc > c){
	  c = nc;
	  fs = s[i];
	}
      }
    }
  }
  cout << fs << " " << ms << endl;
  return 0;
}