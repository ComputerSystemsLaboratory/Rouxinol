#include <iostream>
#include <string>
using namespace std;

int main(){
  char s[21];
  cin>>s;
  string str(s);
  for(string::reverse_iterator r = str.rbegin();r!=str.rend();r++) cout<<*r;
  cout<<endl;
  return 0;
}