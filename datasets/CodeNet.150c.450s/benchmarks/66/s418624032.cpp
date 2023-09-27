#include <iostream>
#include <set>
using namespace std;

set<string> reg;

int main(){
  int n;

  while(cin >> n){
    reg.clear();

    for(int i = 0; i < n; i++){
      string s;
      cin >> s;
      reg.insert(s);
    }

    bool open = false;
    int m;
    cin >> m;

    while(m--){
      string s;
      cin >> s;

      if(reg.find(s) == reg.end()){
        cout << "Unknown " << s << endl;
      }
      else if(open){
        open = !open;
        cout << "Closed by " << s << endl;
      }
      else{
        open = !open;
        cout << "Opened by " << s << endl;
      }
    }
  }
}