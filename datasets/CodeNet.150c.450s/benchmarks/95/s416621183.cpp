#include <iostream>
using namespace std;
int main(void){
  for(;;){
    int n;
    cin >> n;
    if(n == 0){return 0;}
    string f[n];
    for(int i = 0 ; i < n ; i++){
      cin >> f[i];
    }
    int lstate = 0;
    int rstate = 0;
    int count  = 0;
    int next   = 1;
    for(int i = 0 ; i < n ; i++){
      if(f[i] == "lu"){
	lstate = 1;
      }else if(f[i] == "ru"){
	rstate = 1;
      }else if(f[i] == "ld"){
	lstate = 0;
      }else{
	rstate = 0;
      }
      if(lstate == next && rstate == next){
	count++;
	next = (next == 0)?(1):(0);
      }
    }
    cout << count << endl;
  }
}

