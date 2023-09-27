#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  while(true){
    map<char, char> mp;
    int n, m;
    scanf("%d", &n);
    if(n == 0){
      return 0;
    }
    for(int i = 0; i < n; i++){
      char ci, co;
      cin >> ci >> co;
      mp[ci] = co;
    }
    scanf("%d", &m);
    string str = "";
    for(int i = 0; i < m; i++){
      char c;
      cin >> c;
      if(mp.find(c) == mp.end())
        str.push_back(c);
      else
        str.push_back(mp[c]);
    }
    cout << str << endl;
  }
}