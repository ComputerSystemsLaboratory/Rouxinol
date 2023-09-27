#include <bits/stdc++.h>
using namespace std;

bool isByTurn(char leg1, char leg2){
  if(leg1 != leg2) return true;
  else return false;
}

bool isOnFloor(char right_leg, char left_leg){
  if(right_leg == 'd' && left_leg == 'd') return true;
  else return false;
}

bool isOnStep(char right_leg, char left_leg){
  if(right_leg == 'u' && left_leg == 'u') return true;
  else return false;
}

int main(void){
  int n;
  while(cin >> n, n){
    int ans = 0;
    vector<string> action;
    char right_leg = 'd';
    char left_leg  = 'd';
    for(int i=0; i < n; i++){
      string tmp; cin >> tmp;
      action.push_back(tmp);
    }
    if(n == 1){
      cout << 0 << endl;
      continue;
    }

    for(int i=0; i < n-1; i++){
      if(isOnFloor(right_leg, left_leg) && isByTurn(action[i][0], action[i+1][0])){

	i++;
	ans++;
	right_leg = 'u';
	left_leg = 'u';

      }else if(isOnStep(right_leg, left_leg) && isByTurn(action[i][0], action[i+1][0])){
	i++;
	ans++;
	right_leg = 'd';
	left_leg = 'd';      

      }else{
	if(action[i][0] == 'l'){
	  left_leg = action[i][1];
	}else{
	  right_leg = action[i][1];
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}