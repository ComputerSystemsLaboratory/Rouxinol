#include<iostream>
using namespace std;

int main(){
  int x,y,s;
  x = 1;
  y = 1;
  s = 1;
  while(x>0&&y>0&&s>0){
    cin >> x >> y >> s;
    if(x < 100 && x > 0 && y < 100 && y > 0 && s < 1000 && s > 0){
      int f = 0;
      for(int i=1;i<s;i++){
	int a = 1;
	while(int(a*(100+x)/100) <= i){
	  a += 1;
	}
	a -= 1;
	int b = 1;
	while(int(b*(100+x)/100) <= s-i){
	  b += 1;
	}
	b -= 1;
	if(int(a*(100+x)/100) == i && int(b*(100+x)/100) == s-i ){
	  int k = int((a*(100+y)/100)) + int((b*(100+y)/100));
	  if(k > f){
	    f = k;
	  }
	}
      }
      cout << f <<endl;
    }
  }
}