#include <iostream>

using namespace std;

int main(){
  int rep;
  cin >> rep;
  for(int i=0;i<rep;i++){
	int in,b = 0,c = 0;
	bool ball = true;
	for(int j=0;j<10;j++){
	  cin >> in;
	  if (in < b && in < c){     
		ball = false;
	  }
	  else if (in < b && in > c){
		c = in;
	  }
	  else if (in > b && in < c){
		b = in;
	  }
	  else if (in > b && in > c){
		((b > c)? b : c ) = in;
	  }
	}
	cout << (ball?"YES":"NO") << endl;
  }
}