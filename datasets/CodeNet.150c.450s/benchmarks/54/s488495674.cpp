#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
  string w, t;
  int n = 0;

  cin >> w;

  for( int i = 0; i < w.size(); i++){
    w[i] = toupper(w[i]);
  }

  while(1){
    cin >> t;
    if( t == "END_OF_TEXT" ) break;
    for( int i = 0; i < t.size(); i++){
      t[i] = toupper(t[i]);
    }
    if( t == w ) n += 1;
  }

  cout << n << endl;

  return 0;
}