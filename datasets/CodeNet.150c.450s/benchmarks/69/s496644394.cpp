#include <iostream>

using namespace std;


int main(){

	int n, A, B, C;
	bool ans;

	cin >> n;

	while (n--){
		ans = true;
		B = 0;
		C = 0;

		for (int i = 0; i < 10; i++){
			cin >> A;

			if (A > B){
				B = A;
			}
			else if(A > C){
				C = A;
			}
			else{
				ans = false;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;

	}


	return 0;
}