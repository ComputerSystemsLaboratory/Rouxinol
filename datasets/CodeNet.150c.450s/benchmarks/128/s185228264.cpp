#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  for(string::reverse_iterator r = s.rbegin();r!=s.rend();r++) cout<<*r;
  cout<<endl;
  return 0;
}