#include <iostream>

#define r(i) for(int i=0; i<10; i++)

using namespace std;

int main(){
  int n;
  
  while(cin >> n){
	int a,b,c,d;
	int cnt = 0;

	r(a)r(b)r(c)r(d){
	  if(a+b+c+d == n) cnt++;
	}
	cout << cnt << endl;
  }
  return 0;
}