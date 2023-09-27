#include <bits/stdc++.h>
using namespace std;
int main(){
  list<int> lst;
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  string query;
  int key;
  list<int>::iterator itr;
  while(n--){
    cin >> query;
    if(query == "insert"){
      cin >> key;
      lst.push_front(key);
    }
    if(query == "delete"){
      cin >> key;
      for(itr = lst.begin();itr != lst.end();itr++){
	if(*itr == key){lst.erase(itr);break;}
      }
    }
    if(query == "deleteFirst")lst.pop_front();
    if(query == "deleteLast")lst.pop_back();
  }
  for(itr = lst.begin();itr != --lst.end();itr++){
    cout << *itr << " ";
  }
  cout << *itr << endl;
  return 0;
}