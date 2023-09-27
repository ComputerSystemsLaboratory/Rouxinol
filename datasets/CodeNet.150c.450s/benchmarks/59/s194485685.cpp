#include <iostream>

using namespace std;

static const int MAX = 100;

int N, A[MAX];

void output(void)
{
	for(int i=0;i<N;i++){
		cout << A[i];
		if (i < N-1) cout << " ";
	}
	cout << endl;
	return;
}

int main(void)
{
	int temp, j;
	cin >> N;
	for (int i=0;i<N;i++) cin >> A[i];
	output();
	for(int i=1;i<N;i++){
		temp = A[i];
		j = i - 1;
		while(j >= 0 && A[j] > temp){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = temp;
		output();
	}
	return 0;
}