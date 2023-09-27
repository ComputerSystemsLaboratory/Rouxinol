#include <iostream>
using namespace std;
string s;
string yomi(int a,int b){
  string ret;
  for(int i = a; b >= i; i++){
    ret.push_back(s[i]);
  }
  return ret;
}
int main(){
  cin>>s;
  int q; cin>>q;
  for(int i = 0; q > i; i++){
    string sq;int a,b;cin>>sq>>a>>b;
    if(sq == "print"){
      for(int j = a; b >= j; j++){
        cout << s[j];
      }
      cout << endl;
    }else if(sq == "reverse"){
      string tmp = yomi(a,b);
      for(int j = b; a <= j; j--){
        s[j] = tmp[b-j];
      }
    }else if(sq == "replace"){
      string c;cin>>c;
      for(int j = a; b >= j; j++){
        s[j] = c[j-a];
      }
    }
    
  }
}
