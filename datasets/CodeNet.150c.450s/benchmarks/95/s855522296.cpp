#include<iostream>
#define rep(i,n) for(int i=0;i<(int)n;i++)
using namespace std;

int main(){
  int n;
  while(cin >> n){
    if(n==0)break;
    string step;
    bool isLeftUp = false, isRightUp = false, isUp = false;
    int cnt = 0;

    rep(i,n){
      cin >> step;
      if(step[0] == 'l'){
	if(step[1] == 'u')isLeftUp = true;
	else isLeftUp = false;
      }else{
	if(step[1] == 'u')isRightUp = true;
	else isRightUp = false;
      }

      if(isLeftUp && isRightUp && !isUp){
	isUp = true; cnt++;
      }

      if(!isLeftUp && !isRightUp && isUp){
	isUp = false; cnt++;
      }
    }
    cout << cnt << endl;
  }
}