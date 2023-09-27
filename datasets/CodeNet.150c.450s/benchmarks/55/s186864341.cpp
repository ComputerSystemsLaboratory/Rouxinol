// 1_8_B
#include <iostream>
#include <string>
using namespace std;

int main(){
  int i, ans;
  string n;

  while(true){
    ans = 0;
    cin >> n;
    if(n == "0") return 0;

    for(i = 0; i < (int)n.length(); i++){
      ans += n[i] - '0';
    }
    cout << ans << endl;
  }
}