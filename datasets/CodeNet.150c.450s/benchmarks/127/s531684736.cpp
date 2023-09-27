#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main(){
  int m;
  cin >> m;

  for(int i=0;i<m;i++){
    string train;
    cin >> train;
    set<string> st;
    for( int i = 1, length = train.length() ; i < length ; ++i ){
      string forward, backward;
      forward = train.substr(0,i);
      backward = train.substr(i, length-i);
      st.insert(forward+backward);
      st.insert(backward+forward);
      reverse(backward.begin(), backward.end());
      st.insert(forward+backward);
      st.insert(backward+forward);
      reverse(forward.begin(), forward.end());
      st.insert(forward+backward);
      st.insert(backward+forward);
      reverse(backward.begin(), backward.end());
      st.insert(forward+backward);
      st.insert(backward+forward);
    }
    cout << st.size() << endl;
  }
  return 0;
}