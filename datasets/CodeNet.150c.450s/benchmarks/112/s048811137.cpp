
#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;
#define REP(i,n) for(long long int (i)=0;(i) < (n);(i)++)

int n,m;
char from,to,tmp;

int main(){
  cin >> n;
  while(n){
      map<char,char>dict;
      REP(i,n){
        cin >> from >> to;
        dict[from] = to;
      }
      cin >> m;
      REP(i,m){
        cin >> tmp;
        if(dict.find(tmp) == dict.end()) cout << tmp;
        else cout << dict[tmp];
      }
      cout << endl;
      cin >> n;
  }
  return 0;
}
