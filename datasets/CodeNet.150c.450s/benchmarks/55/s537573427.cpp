#include <iostream>
using namespace std;
int main(){
  string s;
  while(cin>>s){
    if(s == "0")break;
    int sm = 0;
    for(int i = 0; s.size( ) > i; i++){
      sm += s[i]-'0';
    }
    cout << sm << endl;
  }
}
