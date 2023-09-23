/*last edited at 27.8.2015 by charis
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A
*/

#include<iostream>
using namespace std;
	
void bubbleSort(int N, int A[], int C){
	for(int i=0; i<N; i++){
		for(int j=N-1; j>=i; j--){
			if(A[j]<A[j-1]) {
				int t=A[j-1]; A[j-1]=A[j]; A[j]=t; C++;
			}
		}
	}
	for(int i=0; i<N-1; i++){
		cout << A[i] << " ";
	}	
	cout << A[N-1] << endl;
	cout << C << endl;	
}

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	
	int C=0;
	bubbleSort(N, A, C);
	
	return 0;
}