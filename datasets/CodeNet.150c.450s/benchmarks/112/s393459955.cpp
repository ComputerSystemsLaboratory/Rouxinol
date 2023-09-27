#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
#include <map>
using namespace std;

#define PI 4*atan(1);

int main(){
  int n;
  while(cin >> n && n){
    map<char, char> table;
    char a, b;
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      table[a] = b;
    }
    int m;
    cin >> m;
    string s;
    for(int i = 0; i < m; i++){
      char tmp;
      cin >> tmp;

      if(table.count(tmp)){
        s += table[tmp];
      }else{
        s += tmp;
      }
    }
    cout << s << endl;
  }
}