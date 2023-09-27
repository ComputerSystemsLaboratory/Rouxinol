#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  int i;
  int count = 0;
  vector<int> ans;
  int a, b, c, d;
  
  while(cin >> i){
    count = 0;
    if(cin.eof()){
      break;
    }
    for(a = 0; a < 10; a++){
      for(b = 0; b < 10; b++){
	for(c = 0; c < 10; c++){
	  for(d = 0; d < 10; d++){
	    if(a + b + c + d == i){
	      count++;
	    }
	  }
	}
      }
    }
    ans.push_back(count);
  }
  for(int& d : ans){
    cout << d << endl;
  }
}