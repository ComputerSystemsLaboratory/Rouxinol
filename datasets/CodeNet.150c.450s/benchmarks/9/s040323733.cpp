#include <iostream>
#include <string>
using namespace std;

string s;
int m;
int h;

int main(){
  while(1){
    cin >> s;
    if(s == "-") break;
    cin >> m;
    for(int i = 0; i < m; i++){
      cin >> h;
      s += s.substr(0, h);
      s.erase(s.begin(), s.begin()+h);
    }
    cout << s << endl;
  }
}