#include <iostream>
using namespace std;
int main(){
  bool ans = false;
  string a, b;
  cin >> a >> b;
  for(int i=0;i<a.size();++i){
    int j;
    for(j=0;j<b.size();++j)
      if(a[(i+j)%a.size()] != b[j]) break;
    if(j == b.size())
      ans = true;
  }

  cout << (ans? "Yes": "No") << endl;

  return 0;
}