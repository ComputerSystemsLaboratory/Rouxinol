#include <iostream>
#include <map>
using namespace std;

int main(){
  int n,m;
  char cha, chb;
  char c;
  char *out;
  out = new char[100000001];

  while(cin >> n, n){
    map<char, char> conv;
    map<char, char>::iterator itr;    
    for(int i=0; i<n; i++){
      cin >> cha >> chb;
      conv.insert(make_pair(cha, chb));
    }
    cin >> m;
    for(int i=0; i<m; i++){
      cin >> c;
      if((itr = conv.find(c)) != conv.end()) out[i] = itr->second;
      else out[i] = c;
    }
    out[m] = '\0';
    cout << out << endl;
  }
  return 0;
}