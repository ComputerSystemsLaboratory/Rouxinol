#include <iostream>

using namespace std;

void BubbleSort(char *C, int N, char *A) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = N-1; j > i; j--) {
			if (C[j] < C[j-1]) {
				swap(C[j], C[j-1]);
				swap(A[j], A[j-1]);
			}
		}
	}
}

void SelectionSort(char *C, int N, char *A) {
	int i, j;
	int minj;
	for (i = 0; i < N; i++) {
		minj = i;
		for (j = i; j < N; j++) {
			if (C[j] < C[minj])
				minj = j;
		}
		swap(C[i], C[minj]);
		swap(A[i], A[minj]);
	}
}



int main(void)
{
	char A[36];
	int N;
	char C[36];
	char Amoto[36];
	char Cmoto[36];
    cin>>N;
	int i, j;
	for (i = 0; i < N; i++) {
		cin>>A[i];
		cin>>C[i];
	}
	for (i = 0; i < N; i++) {
		Amoto[i] = A[i];
		Cmoto[i] = C[i];
	}
	int M[9][36];
	int k = 0;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < N; j++) {
			if( (C[j] - '0') == (i + 1) ) {
				M[i][k] = A[j];
				k++;
			}
		}
		k = 0;
	}
	BubbleSort(C, N, A);
	for (i = 0; i < N; i++) {
		if(i > 0) {
			cout<<" ";
		}
		cout<<A[i];
		cout<<C[i];
	}
	cout<<endl;
	int flag = 1;
	for ( i = 0; i < 9; i++ ) {
		k = 0;
		for ( j = 0; j < N; j++ ) {
			if ( (C[j] - '0') == (i + 1) ) {
				if (A[j] != M[i][k]) {
					flag = 0;
					break;
					i = 9;
				} else {
					k++;
				}
			}
		}
	}
	if (flag == 0) {
		cout<<"Not stable"<<endl;
	} else {
		cout<<"Stable"<<endl;
	}			
		
	for (i = 0; i < N; i++) {
		A[i] = Amoto[i];
		C[i] = Cmoto[i];
	}
	SelectionSort(C, N, A);
	for (i = 0; i < N; i++) {
		if(i > 0) {
			cout<<" ";
		}
		cout<<A[i];
		cout<<C[i];
	}
	cout<<endl;
	flag = 1;
	for ( i = 0; i < 9; i++ ) {
		k = 0;
		for ( j = 0; j < N; j++ ) {
			if ( (C[j] - '0') == (i + 1) ) {
				if (A[j] != M[i][k]) {
					flag = 0;
					break;
					i = 9;
				} else {
					k++;
				}
			}
		}
	}
	if (flag == 0) {
		cout<<"Not stable"<<endl;
	} else {
		cout<<"Stable"<<endl;
	}
	
	
	
}