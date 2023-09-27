#include <iostream>

using namespace std;

void solve(){

}
int encnt[101], ans;
int main(){
  int n;

  while(cin >> n){
    encnt[n]++;
    ans = max(ans, encnt[n]);
  }
  for(int i = 0; i < 100; i++){
    if(encnt[i] == ans){
      cout << i << endl;
    }
  }
  return 0;
}