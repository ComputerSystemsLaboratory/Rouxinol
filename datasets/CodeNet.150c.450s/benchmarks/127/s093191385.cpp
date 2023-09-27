#include <iostream>
#include <set>
using namespace std;

string reverse(string a){
  string r;
  for( int i=0;i<(int)a.length();i++ )
    r = a[i] + r;
  return r;
}
int main(){
  int m;
  cin >> m;
  string s;
  while(m--){
    cin >> s;
    set<string> st;
    for( int i=1;i<(int)s.length();i++ ){
      string a = s.substr(0,i);
      string b = s.substr(i);
      string ra = reverse(a);
      string rb = reverse(b);
      st.insert( a+b );
      st.insert( a+rb);
      st.insert( ra+b );
      st.insert( ra+rb);
      st.insert( b+a );
      st.insert( b+ra);
      st.insert( rb+a );
      st.insert( rb+ra);
    }
    cout << st.size() << endl;
  }
  return 0;
}