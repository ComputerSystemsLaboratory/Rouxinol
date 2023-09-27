#include <iostream>
using namespace std;

typedef struct cord {
	char suit;
	char value;
} Cord;

void BubbleSort( Cord a[], int n ) {
	for ( int i = 0; i < n-1; i++ ) {
		for ( int j = n-1; j > i; j-- ) {
			if ( a[j].value < a[j-1].value ) {
				swap( a[j], a[j-1] );
			}
		}
	}
}

void SelectionSort( Cord a[], int n ) {
	for ( int i = 0; i < n-1; i++ ) {
		int min = i;
		for ( int j = i; j < n; j++ ) {
			if ( a[j].value < a[min].value ) {
				min = j;
			}
		}
		swap( a[i], a[min] );
	}
}

void Print( Cord a[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		if ( i ) cout << " ";
		cout << a[i].suit << a[i].value;
	}
	cout << endl;
}

bool IsStable( Cord C1[], Cord C2[], int n ) {
	for ( int i = 0; i < n; i++ ) {
		if ( C1[i].suit != C2[i].suit ) {
			return false;
		}
	}
	return true;
}

//void InsertionSort( Cord a[], int n ) {
//	for ( int i = 1; i < n; i++ ) {
//		int key = a[i].value;
//		int j;
//		for ( j = i-1; j >= 0; j-- ) {
//			if ( key < a[j].value ) {
//				a[j+1] = a[j];
//			}	
//		}
//		a[j+1].value = key;
//	}
//}

int main() {
	
	Cord C1[100], C2[100];
	int n;
	char ch;
	
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> C1[i].suit >> C1[i].value;
	}
	for ( int i = 0; i < n; i++ ) {
		C2[i] = C1[i];
	}
	
	BubbleSort(C1, n);
	SelectionSort(C2, n);
	
	Print(C1, n);
	cout << "Stable\n";
	Print(C2, n);
	if ( IsStable( C1, C2, n ) ) {
		cout << "Stable\n";
	} else {
		cout << "Not stable\n";
	}
	
	return 0;
}