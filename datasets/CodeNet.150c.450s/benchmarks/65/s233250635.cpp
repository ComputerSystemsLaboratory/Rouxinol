#include<iostream>
using namespace std;

void BubbleSort(char C[36][2], int N){
	for(int i = 1; i < N; i ++){
		for(int j = N - 1; j >= i; j --){
			if(C[j][1] < C[j - 1][1]){
				char temp[2];
				temp[0] = C[j][0];
				temp[1] = C[j][1];
				C[j][0] = C[j- 1][0];
				C[j][1] = C[j- 1][1];
				C[j - 1][0] = temp[0];
				C[j - 1][1] = temp[1];
			}
		}
	}
}

void SelectionSort(char C[36][2], int N){
	for(int i = 0; i < N; i ++){
		int min = i;
		for(int j = i; j < N; j ++){
			if(C[j][1] < C[min][1]){
				min = j;
			}
		}
		char temp[2];
		temp[0] = C[i][0];
		temp[1] = C[i][1];
		C[i][0] = C[min][0];
		C[i][1] = C[min][1];
		C[min][0] = temp[0];
		C[min][1] = temp[1];
	}
}

int  main(void){
	char C[36][2], C2[36][2];
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i ++) cin >> C[i];
	for(int i = 0; i < n; i ++){
		C2[i][0] = C[i][0];
		C2[i][1] = C[i][1];
	}
	
	BubbleSort(C, n);
	for(int i = 0; i < n; i ++){
		cout << C[i][0] << C[i][1];
		if(i != n - 1)cout << " ";
	}
	cout << endl << "Stable" << endl;
	
	SelectionSort(C2, n);
	for(int i = 0; i < n; i ++){
		cout << C2[i][0] << C2[i][1];
		if(i != n - 1)cout << " ";
	}
	for(int i = 0; i < n; i ++){
		if(C[i][0] != C2[i][0]){
			cout << endl << "Not stable" << endl;
			return 0;
		}
	}
	cout << endl << "Stable" << endl;
	return 0;
}