#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;

  while(cin >> n && n){

    int judge[4] = {0}, cnt = 1, step = 0;
    string str;

    for(int i = 0; i < n; i++){ 
      cin >> str;
      if(str == "lu"){
	if(judge[0] == 0){
	  judge[0] = 1;
	  judge[2] = 0;
	}
	else{
	  judge[0] = 0;
	  judge[2] = 1;
	}
      }else  if(str == "ru"){
	if(judge[1] == 0){
	  judge[1] = 1;
	  judge[3] = 0;
	}
	else{
	  judge[1] = 0;
	  judge[3] = 1;
	}
      }else  if(str == "ld"){
	if(judge[2] == 0){
	  judge[2] = 1;
	  judge[0] = 0;
	}
	else{
	  judge[2] = 0;
	  judge[0] = 1;
	}
      }else  if(str == "rd"){
	if(judge[3] == 0){
	  judge[3] = 1;
	  judge[1] = 0;
	}
	else{
	  judge[3] = 0;
	  judge[1] = 1;
	}
      }
      if(judge[0] == 1 && judge[1] == 1 && judge[2] == 0 && judge[3] == 0 && cnt % 2 == 1){
	cnt++;
	step++;
      }else if(judge[0] == 0 && judge[1] == 0 && judge[2] == 1 && judge[3] == 1 && cnt % 2 == 0){
	cnt++;
	step++;
      } 

    }
    cout << step << endl;

  }

  return 0;
}