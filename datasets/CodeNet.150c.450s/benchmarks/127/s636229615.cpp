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
      string f, b;
      f = train.substr(0,i);
      b = train.substr(i, length-i);
      st.insert(f+b);
      st.insert(b+f);
      reverse(b.begin(), b.end());
      st.insert(f+b);
      st.insert(b+f);
      reverse(f.begin(), f.end());
      st.insert(f+b);
      st.insert(b+f);
      reverse(b.begin(), b.end());
      st.insert(f+b);
      st.insert(b+f);
    }
    cout << st.size() << endl;
  }
  return 0;
}