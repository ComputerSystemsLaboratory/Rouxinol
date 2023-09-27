#include <iostream>
using namespace std;

int main(){
  while(true){
    string s;
    string bottom;
    string top;
    int m;
    int h;
    cin >> s;
    if(s=="-")break;
    cin >> m;
    for(int i=0; i<m; i++){
      cin >> h;
      //cout << h << endl;
      bottom = s.substr(0, h);
      top = s.substr(h, s.length()-h);
      //cout << bottom << " " << top << endl;
      for(int i=0; i<s.length()-h;i++){
        s[i] = top[i];
      }
      for(int i=0; i<h; i++){
        s[i+s.length()-h]=bottom[i];
      }
    }
    cout << s << endl;
  }
}
