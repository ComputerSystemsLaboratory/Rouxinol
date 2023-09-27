#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;

  while(1){

	cin >> n;

	if(n == 0)
	  break;

	int state = 0;
	int stt_r = 0;
	int stt_l = 0;
	int cnt = 0;
	string f;

	for(int i = 0;i < n;++i){
	  cin >> f;

	  if(f == "lu")
		stt_l = 1;
	  else if(f == "ru")
		stt_r = 1;
	  else if(f == "ld")
		stt_l = 0;
	  else if(f == "rd")
		stt_r = 0;

	  if(state == 0 && stt_l == 1 && stt_r == 1){
		cnt++;
		state = 1;
	  }
	  else if(state == 1 && stt_l == 0 && stt_r == 0){
		cnt++;
		state = 0;
	  }
	  
	}
	cout << cnt << endl;
  }

}
