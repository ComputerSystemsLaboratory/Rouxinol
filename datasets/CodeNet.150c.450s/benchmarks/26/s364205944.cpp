#include <iostream>
using namespace std;

int main(){
   string ans[3] = {"a > b","a == b","a < b"};
   int a,b;
   cin >> a >> b;
   cout << ans[(a < b) + (a <= b)] << endl;
}