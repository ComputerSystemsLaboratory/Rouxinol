#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>

const int INF = 1001001000;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

int main(){
  list<int> lst;
  string str;
  int n;
  int x;
  list<int>::iterator itr;

  cin >> n;
  for( int i = 0; i < n; ++i){
    cin >> str;
    if( str == "insert" ){
      cin >> x;
      lst.push_front(x);
    }else if( str == "delete"){
      cin >> x;
      for( itr = lst.begin(); itr != lst.end();++itr){
        if( *itr == x ){
          lst.erase(itr);
          break;
        }
      }
    }else if( str == "deleteFirst"){
      lst.pop_front();
    }else{
      lst.pop_back();
    }
  }

  auto itr2 = lst.end();
  itr2--;

  for( itr = lst.begin(); itr != itr2;++itr){
    cout << *itr << " ";
  }
  cout << lst.back() << endl;
}