#include <iostream>
#include <vector>

using namespace std;

int sum(int x[], int xNum) {
	int result = 0;
	for (int i = 0; i < xNum; i++) {
		result += x[i];
	}
	return result;
}

int main(void){
    int aSum, bSum;
	int a[4], b[4];

	cin >> a[0] >> a[1] >> a[2] >> a[3];
	cin >> b[0] >> b[1] >> b[2] >> b[3];

	aSum = sum(a, sizeof a / sizeof a[0]);
	bSum = sum(b, sizeof b / sizeof b[0]);

	cout << ((aSum >= bSum) ? aSum : bSum) << endl;

    return 0;
}