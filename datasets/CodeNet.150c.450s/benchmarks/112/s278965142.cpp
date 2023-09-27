#include<iostream>
#include<string>
#include<map>
#include<utility>
#include<cstdio>
using namespace std;

int main() {
  int n, m;
  char str1;
  char str2;
  char strm;
  char ans[100000];

  while(cin >> n){
    map<char , char> encode;
    if(n == 0) break;
    for(int i = 0; i < n; i++) {
      cin >> str1 >> str2;
      encode[str1] = str2;
    }

    cin >> m;
    int index = 0;
    for(int i = 0; i < m; i++) {
      cin >> strm;
      char foo = encode[strm];
      if(foo){
        ans[index++] = foo;
      }else {
        ans[index++] = strm;
      }
    }

    for(int i = 0; i < index; i++) {
      cout << ans[i];
    }
    cout << endl;
  }
}