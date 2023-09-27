#include <iostream>
using namespace std;
int main(){
  string l;
  bool ok = false;
  while(cin>>l){
    if(ok)cout << " ";
    ok=true;
    for(int i = 0; l.size() > i; i++){
      if(l[i]<='Z' && 'A'<=l[i])l[i]+='a'-'A';
      else if(l[i]<='z' && 'a'<=l[i])l[i]-='a'-'A';
    }
    cout << l;
  }
  cout << endl;
}
