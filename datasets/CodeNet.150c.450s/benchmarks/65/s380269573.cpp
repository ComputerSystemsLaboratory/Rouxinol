#include <iostream>
using namespace std;

static void bubbleSort(int *ID, int *A, int N){
	int temp;
	bool flag;
	do{
		flag = false;
		for (int j = N - 1; j >= 1; j--){
			if (A[ID[j]] < A[ID[j - 1]]){
				temp = ID[j];
				ID[j] = ID[j - 1];
				ID[j - 1] = temp;
				flag = true;
			}
		}
	} while (flag);
}

static void selectionSort(int *ID, int *A, int N){
	int minj, temp;
	for (int i = 0; i < N; i++){
		minj = i;
		for (int j = i + 1; j < N; j++){
			if (A[ID[j]] < A[ID[minj]]){
				minj = j;
			}
		}

		if (minj != i){
			temp = ID[i];
			ID[i] = ID[minj];
			ID[minj] = temp;
		}
	}
}

static bool isStable(int *ID_bubble, int *ID_select, int N){
	for (int i = 0; i < N; i++){
		if (ID_bubble[i] != ID_select[i]){
			return false;
		}
	}

	return true;
}

int main(void){
	int N, *A, *ID_bubble,*ID_select;
	char *pic;

	cin >> N;

	A = new int[N];
	pic = new char[N];
	ID_bubble = new int[N];
	ID_select = new int[N];

	for (int i = 0; i < N; i++){
		cin >> pic[i];
		cin >> A[i];

		ID_bubble[i] = i;
		ID_select[i] = i;
	}

	bubbleSort(ID_bubble, A, N);
	selectionSort(ID_select, A, N);

	for (int i = 0; i < N; i++){
		cout << pic[ID_bubble[i]] << A[ID_bubble[i]];
		if (i != N - 1){
			cout << " ";
		}
	}

	cout << "\nStable\n";

	for (int i = 0; i < N; i++){
		cout << pic[ID_select[i]] << A[ID_select[i]];
		if (i != N - 1){
			cout << " ";
		}
	}

	cout << "\n";
	if (isStable(ID_bubble, ID_select, N)){
		cout << "Stable";
	}
	else{
		cout << "Not stable";
	}
	cout << "\n";

	return 0;
}