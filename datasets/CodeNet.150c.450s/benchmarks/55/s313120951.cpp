#include <iostream>
using namespace std;
int main(){
  while(1){
    string s; cin >> s;
    if(s=="0")break;
    int ans=0;
    for(int i=0; i<s.size(); i++){
      ans += stoi(s.substr(i,1));
    }
    cout <<ans <<endl;
  }
}