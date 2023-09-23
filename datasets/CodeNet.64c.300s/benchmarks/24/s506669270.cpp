#include <iostream>
using namespace std;

int main()
{
	int a;
	int r, l;

	while (cin >> a && (a != 0)){
		int rsum, lsum;
		rsum = 0;
		lsum = 0;
		for (int i = a; i > 0; i--){

			cin >> r;
			cin >> l;
			if (r > l){
				rsum += r + l;
			}
			else if (l > r){
				lsum += r + l;
			}
			else{
				rsum += r;
				lsum += l;
			}
		}
		cout << rsum << ' ' << lsum << endl;
	} 
}