#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N, A[10000];

	cin >> N;
	for (int i = 0;i < N;i++) cin >> A[i];

	int count = N;

	for (int i = 0;i < N;i++) {
		
		int j = 2;

		//cout << endl;
		//cout << A[i] << "??????";
		//cout << count;
		
		while(sqrt(A[i]) >= j) {
			if (A[i] % j == 0) {
				//cout << j;
				count--;
				break;
			}
			j++;
		}
	}
	//cout << endl;
	//cout << endl;
	cout << count << endl;

    return 0;
}