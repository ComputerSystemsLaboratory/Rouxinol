/* last edited at 27.8.2015 by charis
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B
*/

#include<iostream>
using namespace std;

void SelectionSort(int N, int A[], int C){
	for(int i=0; i<N; i++){
		int mini=i;
		for(int j=i; j<N; j++){
			if(A[j]<A[mini]) mini = j;
		}
		if(mini != i){
		int t=A[i]; A[i]=A[mini]; A[mini]=t;
		C++;
		}
	}
	for(int i=0; i<N-1; i++){
		cout << A[i] << " ";
	}	
	cout << A[N-1] << endl;
	cout << C << endl ;
}

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	
	int C=0;
	SelectionSort(N, A, C);
	
	return 0;
}