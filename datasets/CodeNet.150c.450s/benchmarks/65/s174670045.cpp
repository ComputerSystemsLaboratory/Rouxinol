#include <iostream>
#define MAX 36

using namespace std;

void showArray(char C[][3], int N){
	int flag = 0;
	for (int p = 0; p < N - 1; p++){
		cout << C[p][0] << C[p][1] << " ";
		if (C[p][1] == C[p + 1][1] && C[p][2] > C[p + 1][2]){
			flag = 1;
		}
	}
	cout << C[N - 1][0] << C[N - 1][1]<< endl;
	if (flag == 0){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not stable" << endl;
	}
}

void bubbleSort(char C[][3], int N){

	for (int i = 0; i < N; i++){
		for (int j = N - 1; j > 0; j--){
			if (C[j][1] < C[j - 1][1]){
				char temp[3];
				temp[0] = C[j][0];
				temp[1] = C[j][1];
				temp[2] = C[j][2];

				C[j][0] = C[j - 1][0];
				C[j][1] = C[j - 1][1];
				C[j][2] = C[j - 1][2];

				C[j - 1][0] = temp[0];
				C[j - 1][1] = temp[1];
				C[j - 1][2] = temp[2];
			}
		}
	}

	showArray(C, N);
}

void selectionSort(char C[][3], int N){
	for (int i = 0; i < N; i++){
		int min = i;
		for (int j = i; j < N; j++){
			if (C[min][1] > C[j][1]){
				min = j;
			}
		}
		char temp[2];
		temp[0] = C[i][0];
		temp[1] = C[i][1];
		temp[2] = C[i][2];

		C[i][0] = C[min][0];
		C[i][1] = C[min][1];
		C[i][2] = C[min][2];

		C[min][0] = temp[0];
		C[min][1] = temp[1];
		C[min][2] = temp[2];

	}
	showArray(C, N);
}

int main(){
	int N;
	char C1[MAX][3], C2[MAX][3];
	
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> C1[i];
		C2[i][0] = C1[i][0];
		C2[i][1] = C1[i][1];
		C1[i][2] = i;
		C2[i][2] = i;
	}

	bubbleSort(C1 , N);
	
	selectionSort(C2 , N);

	return 0;
}