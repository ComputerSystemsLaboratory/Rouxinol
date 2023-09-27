#include <iostream>
using namespace std;
int main(){
  while(true){
    string s; cin >> s;
    if(s=="-")break;
    int n;cin>>n;
    for(int i = 0; n > i; i++){
      int k;cin>>k;
      string tmp;
      for(int j = 0; s.size() > j; j++){
        tmp.push_back(s[(j+k)%s.size()]);
      }
      s = tmp;
    }
    cout << s << endl;
  }
}
