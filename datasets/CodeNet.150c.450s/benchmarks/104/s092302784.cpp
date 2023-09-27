#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
  int w,n,a1,b1,change;
  int num[40];
  string str;
  cin >> w;
  for(int i=1;i<w+1;i++) {
    num[i] = i;
  }
  cin >> n;
  for(int i=1,from = 0,to;i<n+1;i++) {
    cin >> str;
    to = str.find(",");
    a1 = strtol(str.substr(0,to).c_str(),NULL,0);
    b1 = strtol(str.substr(to+1).c_str(),NULL,0);
    change = num[a1];
    num[a1] = num[b1];
    num[b1] = change;
  }
  for(int i=1;i<w+1;i++) {
    cout << num[i] << endl;
  }
}