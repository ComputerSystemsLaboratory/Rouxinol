#include <iostream>
using namespace std;

int main(){
  string str, ans;
  cin >> str;
  for(int i = str.size() - 1; i >= 0; i--)
    ans += str[i];
  cout << ans << endl;
}