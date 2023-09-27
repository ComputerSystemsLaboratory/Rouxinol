#include <iostream>

using namespace std;

 int main(void) {

	 int n, a, b, c, x;
	 int y;
	 int cnt;

	 while (1){

		 cin >> n >> a >> b >> c >> x;
		 if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) break;

		 cnt = 0;
		 for (int i = 0; i < n; i++){
			 cin >> y;
			 while (y != x&&cnt <= 10000){
				 x = (a*x + b) % c;
				 cnt++;
			 }
			 if (i != n - 1){
				 x = (a*x + b) % c;
				 cnt++;
			 }
		 }
		 if (cnt <= 10000) cout << cnt << endl;
		 else cout << "-1" << endl;
	 }

	 return 0;
	
}