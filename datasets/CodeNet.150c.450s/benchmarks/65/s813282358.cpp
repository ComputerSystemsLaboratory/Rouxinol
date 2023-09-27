#include <iostream>

using namespace std;

// Data structrue for card
struct card {
	char c;
	int value;
};

// Print cards
void print(struct card C[], int n)
{
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << C[i].c << C[i].value;
	}
	cout << endl;
}


// Sort by bubble sort
void bubbleSort(struct card C[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			// Cheack if the order of card is corrent
			if (C[j].value < C[j - 1].value) {
				// Swap
				struct card tmp = C[j];
				C[j] = C[j - 1];
				C[j - 1] = tmp;
			}
		}
	}
}

// Sort by selection sort
void selectionSort(struct card C[], int n)
{
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i; j < n; j++) {
			if (C[j].value < C[min].value)
				min = j;
		}
		if (min != i) {
			struct card tmp = C[min];
			C[min] = C[i];
			C[i] = tmp;
		}
	}
}


// Cheack if selection sort is stable
bool isStable(struct card C1[], struct card C2[],int n) {
	for (int i = 0; i < n; i++) {
		if (C1[i].c != C2[i].c)
			return false;
	}
	return true;
}

// MAIN FUNCTION
int main()
{
	// Input data
	// Variable for the number of cards
	int n;
	struct card C1[36],C2[36];
	cin >> n;
	// Input n cards
	for (int i = 0; i < n; i++) {
		cin >> C1[i].c >> C1[i].value;
		C2[i].c = C1[i].c;
		C2[i].value = C1[i].value;
	}

	// Do bubble sort
	bubbleSort(C1, n);
	
	// Print cards
	print(C1, n);
	// Print "Stable"
	cout << "Stable" << endl;

	// Do selection sort
	selectionSort(C2, n);
	//Print result
	print(C2, n);

	// Cheack if selection sort is stable
	if (isStable(C1, C2, n))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
	return 0;
}