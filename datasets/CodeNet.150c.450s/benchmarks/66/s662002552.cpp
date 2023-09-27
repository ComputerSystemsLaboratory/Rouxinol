#include<bits/stdc++.h>
using namespace std;

int N,M;
set<string> S;
int main(){
  cin >> N;
  for(int i=0;i<N;i++){
    string s; cin >> s; S.insert( s );
  }
  cin >> M;
  bool f = false;
  for(int i=0;i<M;i++){
    string s; cin >> s;
    if( S.find( s ) != S.end() ){
      if( !f ){
        cout << "Opened"; f = true;
      } else {
        cout << "Closed"; f = false;        
      }
      cout << " by ";
    } else
      cout << "Unknown ";
    cout << s << endl;
  }
}