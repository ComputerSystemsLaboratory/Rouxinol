#include <iostream>
using namespace std;
int main() {
  int n;
  while(cin >> n) {
	int cnt = 0;
	for(int i = 0; i <= 9; ++i) {
	  if(i > n) break;
	  for(int j = 0; j <= 9; ++j) {
		if(i+j > n) break;
		for(int k = 0; k <= 9; ++k) {
		  if(i+j+k > n) break;
		  for(int l = 0; l <= 9; ++l) {
			if(i+j+k+l > n) break;
			else if((i+j+k+l) == n) cnt++;
		  }
		}
	  }
	}
	cout << cnt << endl;
  }
  return 0;
}