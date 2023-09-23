// 2015/07/03 Tazoe

#include <iostream>
using namespace std;

int A[10];

bool DFS(int I, int B, int C)
{
	if(I==10)
		return true;

	if(A[I] > B && DFS(I+1, A[I], C))	// Bに入れて最後まで並べられれば
		return true;

	if(A[I] > C && DFS(I+1, B, A[I]))	// Cに入れて最後まで並べられれば
		return true;

	return false;
}

int main()
{
	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		for(int j=0; j<10; j++){
			cin >> A[j];
		}

		if(DFS(0, 0, 0)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}

	return 0;
}