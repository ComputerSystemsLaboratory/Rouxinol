#include <iostream>

using namespace std;

static const int MAX = 100;

int main(void)
{
	int N, A[MAX];
	int temp, count = 0, flag = 1;
	cin >> N;
	for(int i=0;i<N;i++) cin >> A[i];
	while(flag){
		flag = 0;
		for(int j=N-1;j>0;j--){
			if (A[j-1] > A[j]){
				temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
				count++;
				flag = 1;
			}
		}
	}
	for (int i=0;i<N;i++){
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << count << endl;
	return 0;
}