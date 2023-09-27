#include <iostream>
using namespace std;
string smallchange(string a){
  for(int i = 0;i < a.length();i++){
    if(a[i] >= 'A' && a[i] <= 'Z'){
      a[i] = a[i] + 0x20;
    }
  }
  return a;
}
int main(){
  int count = 0;
  std::string w;
  std::string t;
  cin >> w;
  w = smallchange(w);
  while(cin >> t){
    if(t == "END_OF_TEXT"){
      break;
    }else{
      t = smallchange(t);
      if(t == w){
        count++;
      }
    }
  }

  cout << count << endl;
}