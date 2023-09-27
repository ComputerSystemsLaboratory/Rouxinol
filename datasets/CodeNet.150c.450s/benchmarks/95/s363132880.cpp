#include <iostream>
using namespace std;

int main(){
  int n;

  while(cin >> n, n){
    string pre;
    cin >> pre;

    int cnt = 0;

    for(int i = 0; i < n - 1; i++){
      string s;
      cin >> s;

      if(pre == "lu" && s == "ru" ||
         pre == "ru" && s == "lu" ||
         pre == "ld" && s == "rd" ||
         pre == "rd" && s == "ld"){
        cnt++;
      }

      pre = s;
    }

    cout << cnt << endl;
  }
}