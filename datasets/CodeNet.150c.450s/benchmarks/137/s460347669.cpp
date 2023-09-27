#include<iostream>
#include<algorithm>
#include<functional>
#include<set>
#include<string>
using namespace std;

#if 0
所用時間:15分

感想:

#endif

int N; string str;

int main(){
  string cmd;
  typedef set<string> set_str;
  set_str Dict;

  cin >> N;

  for(int i = 0; i < N; ++i){
    cin >> cmd >> str;
    if(cmd == "insert"){
      Dict.insert(str);
    } else if (cmd == "find"){
      if(Dict.count(str) > 0)  cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
}

