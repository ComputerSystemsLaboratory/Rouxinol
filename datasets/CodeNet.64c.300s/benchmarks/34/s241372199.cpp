#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<stack>
#include<queue>
#include<string>
using namespace std;

void insertionSort(int N, int A[]){
	for (int i = 1; i < N; i++){
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j]>v){
			A[j + 1] = A[j];
			j--;
			A[j + 1] = v;
		}
		for (int l = 0; l < N - 1; l++) cout << A[l] << " ";
		cout << A[N - 1] << endl;
	}
}


int main(){
	int N;
	int A[1000];
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> A[i]; //????????????????????\???
	}
	for (int i = 0; i < N - 1; i++)cout << A[i] << " ";
	cout << A[N - 1] << endl;
	insertionSort(N,A);

	return 0;
}