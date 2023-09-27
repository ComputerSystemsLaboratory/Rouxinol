#include<iostream>
#define maxn 36+5
using namespace std;

typedef struct Card {
	char Suit;
	char Value;
}card;

void BubbleSort ( card *A, int N) {
	for( int i = 0; i < N; i++) {
		for( int j = N -1; j > i; j--) {
			if(A[j].Value < A[j - 1].Value) {
				card temp = A[j];
			    A[j] = A[j - 1];
			    A[j - 1] = temp;
			}
		}
	}
}

void SelectionSort ( card *A, int N) {
	for ( int i = 0; i < N; i++) {
		int minj = i;
		for(int j = i; j < N ;j++) {
			if(A[j].Value < A[minj].Value) minj = j;
		}
		card temp = A[i];
		A[i] = A[minj];
		A[minj] = temp;
	}
}

void print( card *A, int N) {
	for( int i = 0; i < N ; i++){
		cout << A[i].Suit << A[i].Value;
		if(i != N -1) cout << " "; 
		else cout << endl;
	}
}

int main() {
	int N;
	card T1[maxn], T2[maxn];
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> T1[i].Suit >> T1[i].Value;
		T2[i] = T1[i];
	}
	BubbleSort( T1, N );
	SelectionSort( T2, N );
	int flag = 1;
	for(int i = 0; i < N; i++ ) {
		if(T1[i].Suit != T2[i].Suit) {
			flag = 0;
			break;
		}
	}
	print( T1, N );
	cout << "Stable" << endl;
	print( T2, N );
	if( flag ) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	return 0;
}
