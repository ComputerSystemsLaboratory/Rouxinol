#include <iostream>
#include <string>
#include <map>
#include <cstdio>

using namespace std;


int main() {

  int n,m;
  map<char,char> conv;

  string data;
  
  
  while(cin >> n) {

    if(n==0) break;

    conv.clear();

    for(int i=0;i<n;i++) {

      char tmp1,tmp2;

      cin >> tmp1 >> tmp2;

      conv[tmp1]=tmp2;

    }

    cin >> m;

    for(int i=0;i<m;i++) {

      char tmp3;

      cin >> tmp3;

      if(conv[tmp3]) cout << conv[tmp3];

      else cout << tmp3;

    }

    cout << endl;

  }

  return 0;

}