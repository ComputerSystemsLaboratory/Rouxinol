#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> action;
int N;
int ans;

int main(void){
  while(true){
    cin >> N;
    if(N == 0) break;
    ans = 0;
    action.clear();
    for(int i = 0; i < N; i++){
      string tmp;
      cin >> tmp;
      action.push_back(tmp);
    }

    for(int i = 0; i < N - 1; i += 2){
      if(action[i] == "lu" && action[i+1] == "ru") ans++;
      else if(action[i] == "ru" && action[i+1] == "lu") ans++;
      else if(action[i] == "ld" && action[i+1] == "rd") ans++;
      else if(action[i] == "rd" && action[i+1] == "ld") ans++;
    }
    
    cout << ans << endl;
  }
  return 0;
}