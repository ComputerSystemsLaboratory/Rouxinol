#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  vector<string> v1;
  vector<string>::iterator itr;
  string buf, target;
  int cnt = 0;
  
  cin >> target;
  while(cin >> buf) {
	if(buf == "END_OF_TEXT") break;
	transform(buf.begin(), buf.end(), buf.begin(), ::tolower);
	v1.push_back(buf);
  }

  for(itr = v1.begin(); itr != v1.end(); ++itr) {
	if(*itr == target) cnt++;
  }
  cout << cnt << endl;

  return 0;
}