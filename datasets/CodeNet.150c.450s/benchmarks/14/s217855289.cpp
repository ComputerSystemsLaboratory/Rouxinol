#include <iostream>
using namespace std;

void call(int n){
	int i;
 for (i = 1; i <= n; i++){
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    continue;
  }
 for(; x; x /= 10) {
  if ( x % 10 == 3 ){
    cout << " " << i;
    break;
  }
 }
 }
  cout << endl;
}

int main(){
	int n;
	cin >> n;
	call(n);
	return 0;
}