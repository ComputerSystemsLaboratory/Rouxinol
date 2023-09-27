#include <unordered_set>
#include <string>
#include <iostream>
using namespace std;

int main(){
  typedef unordered_set<string> set_t;
  set_t A;
  int n;
  cin >> n;
  string inst, word;
  for(int i=0; i<n; i++){
    cin >> inst >> word;
    if(inst == "insert"){
      A.insert(word);
    }
    else{
      int m = A.count(word);
      if(m==0)cout << "no" << endl;
      else cout << "yes" << endl;
    }
  }
}