#include<iostream>

using namespace std;

int selectionSort(int A[],int N){
	int i,j,sm,count=0,p;
	for(i = 0; i<N; i++){
		sm = i;
		for(j = i+1; j<N; j++){
			if(A[sm]>A[j]){
				sm = j;
			}
		}
		swap(A[i],A[sm]);
		if(i!=sm)count++;
	}
	return count;
}

int main(){
	int A[100],N,count;
	cin >> N;
	for(int i = 0; i<N; i++)cin >> A[i];
	count = selectionSort(A,N);

	for(int i = 0; i<N; i++){
		if(i>0)cout << " ";
		cout << A[i];
	}
	cout << endl << count << endl;

	return 0;
}
