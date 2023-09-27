#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string w, t;
int cnt = 0;

int main(){
  cin >> w;
  while(cin >> t){
    if(t == "END_OF_TEXT") break;
    for(int i = 0; i < t.size(); i++){
      t[i] = tolower(t[i]);
    }
    if(t == w) cnt++;
  }
  cout << cnt << endl;
}