#include <iostream>
#include <string>
using namespace std;

int main(){
  int a,b;
  string s;
  while(cin >> a >> b){
	s = to_string(a+b);
	cout << s.size() << endl;
  }
  return 0;
}