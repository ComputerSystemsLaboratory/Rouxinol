#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	 unsigned int N;
	 cin >> N;

	 for (int n = 1; n <= N; ++n) {
	 	int res = 0;
	 	for (int a = 2; a <= floor(sqrt(2*n-2)); ++a)
	 		for(int b = 2; b <= floor(sqrt(2*n-1-a*a)); ++b) {
	 			float remain = 2*n - a*a - b*b;
	 			float c = floor(sqrt(remain));
	 			if (c*c == remain){
	 				int cc = (int) c;

	 				int x = a+b-cc;
	 				int y = a-b+cc;
	 				int z = cc+b-a;

	 				if (x%2==0 && x>=2 && y%2==0 &&y>=2 && z%2==0 && z>=2)
		 				res++;

	 			}
	 		}
	 	// cout << "f(" << n << ") = " << res << endl;
	 	cout << res << endl;

	 }

	return 0;
}
