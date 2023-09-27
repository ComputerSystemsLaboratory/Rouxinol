#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;

int main(){
  int N, M;
  string s;
  set<string> key;
  
  cin >> N;
  for(int i = 0 ; i < N ; i++){
    cin >> s;
    key.insert(s);
  }
  
  cin >> M;
  bool flag = false;
  for(int i = 0 ; i < M ; i++){
    cin >> s;
    if(key.find(s) == key.end()){
      cout << "Unknown " << s << endl;
    }
    else{
      if(!flag){
	flag = true;
	cout << "Opened by " << s << endl;
      }
      else{
	flag = false;
	cout << "Closed by " << s << endl;
      }
    }
  }
  return 0;
}