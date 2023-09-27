#include <iostream>
#include <string>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  // const string 
  //   str_insert = "insert",
  //   str_delete = "delete",
  //   str_delete_first = "deleteFirst",
  //   str_delete_last = "deleteLast";

  int N;
  cin >> N;
  
  list<int> l;
  // typedef enum{INS, DEL, DEL_F, DEL_L}
  // command;
  
  for(int i = 0; i < N; ++i){
    string s;
    cin >> s;

    //command c;
    if (s[0] == 'i'){
      int n;
      cin >> n;
      l.push_front(n);
      //break;
    }
    else if(s.size() == 6){
      int n;
      cin >> n;
      auto itr = find(l.begin(), l.end(), n);
      if(itr != l.end()){l.erase(itr);}
      //break;
    }
    else if(s[6] == 'F'){
      l.pop_front();
      //break;
    }
    else if(s[6] == 'L'){
      l.pop_back();
      //break;
    }

    // cout << *(l.begin());
    // for(std::list<int>::iterator itr = next(l.begin()); itr!=l.end(); ++itr){
    //   cout << ' ' << *itr;
    // }
    // cout << endl;

  }

  cout << *(l.begin());
  for(std::list<int>::iterator itr = next(l.begin()); itr!=l.end(); ++itr){
    cout << ' ' << *itr;
  }
  cout << endl;

  return 0;
}