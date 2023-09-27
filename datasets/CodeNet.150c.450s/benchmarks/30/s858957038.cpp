#include <iostream>

using namespace std;

static const int MAX = 100;

int main(void)
{
	int N, A[MAX];
	int minj, count = 0;
	cin >> N;
	for(int i=0;i<N;i++) cin >> A[i];
	
	for(int i=0;i<N;i++){
		minj = i;
		for(int j=i+1;j<N;j++){
			if (A[minj] > A[j]){
				minj = j;
			}
		}
		if (i != minj){
			swap(A[i], A[minj]);
			count++;
		}
	}
	for(int i=0;i<N;i++){
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << count << endl;
	return 0;
}