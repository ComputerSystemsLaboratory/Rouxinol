#include<iostream>
using namespace std;
void bubbleSort(int A[],char C[] ,int N) {

	int  flag, j, i = 0;
	flag = 1;
	while (flag) {
		flag = 0;
		for (j = N - 1; j >= i + 1; j--) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				swap(C[j], C[j - 1]);
				flag = 1;
			}
		}
		i++;
	}
	
}
void selectionSort(int A[], char C[], int N) {

	int count = 0, j, i , minj=0;
		for(i = 0; i < N-1; i++){
			minj = i;
			
		for (j = i; j <N; j++) {
		
			if (A[j] < A[minj]) 
				
				minj = j;
		
			
		}
			swap(A[i], A[minj]);
			swap(C[i], C[minj]);
			
			
	
	}
	
}

void answer(int A[], char C[], int N) {
	for (int i = 0; i < N; i++) {
		if (i > 0) cout << " ";
		cout << C[i] << A[i];
	}
	cout << endl;
	
}

bool check(char C1[], char C2[], int N) {
	for (int i = 0; i < N; i++) {
		if (C1[i] != C2[i])return false;
	}
	return true;
}
int main() {

	int C1V[100],C2V[100];
	char C1S[100], C2S[100];
	int N, i;

	cin >> N;
	for (i = 0; i < N; i++)
		cin >> C1S[i] >>C1V[i];
	for (i = 0; i < N; i++) {
		C2S[i] = C1S[i];
		C2V[i] = C1V[i];
	}

	bubbleSort(C1V, C1S, N);
	selectionSort(C2V, C2S, N);
		answer(C1V, C1S, N);
		cout << "Stable" << endl;

		answer(C2V, C2S, N);
		if (check(C1S, C2S, N)) {
			cout << "Stable" << endl;
		} else{
			cout << "Not stable" << endl;
		}
}