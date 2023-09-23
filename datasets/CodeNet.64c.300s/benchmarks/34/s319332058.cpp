#include <iostream>
using namespace std;

void show_sequence(int N, float* A){
	for(int i=0;i<N;i++){
		if(i==N-1){
			cout << A[i] << endl;
		}else{
			cout << A[i] << " ";
		}
	}
}

void insertion_sort(int N, float* A){
	
	for(int i=0;i<N;i++){
		float tmp = A[i];
		int j = i-1;
		while(j>=0 && A[j] > tmp){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = tmp;
		show_sequence(N, A);
	}
}

int main(){
	int N;
	cin >> N;
	
	float A[N];
	for(int i=0;i<N;i++)
		cin >> A[i];

	insertion_sort(N, A);
}
