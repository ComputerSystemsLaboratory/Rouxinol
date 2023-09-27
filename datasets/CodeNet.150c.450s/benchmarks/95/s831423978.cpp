#include<iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  while(n != 0){
    int ans = 0;
    string s[150];


    for(int i=0;i<n;i++) cin >> s[i];

    for(int i=1;i<n;i++){
      if((s[i] == "lu" && s[i-1] == "ru") || (s[i] == "ru" && s[i-1] == "lu")){
        ans++;
      }
      if((s[i] == "ld" && s[i-1] == "rd") || (s[i] == "rd" && s[i-1] == "ld")){
        ans++;
      }
    }

    cout << ans << endl;
    cin >> n;
  }

  return 0;
}