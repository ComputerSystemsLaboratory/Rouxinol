#include<iostream>

using namespace std;

int bubbleSort(int A[],int N){
	for(int i=0; i<N; i++) cin >> A[i];
	int count = 0,x = 0,P;
	bool Y=1;
	for(int j=0; Y; j++){
		P++;
		Y=0;
		for(int i=N-1; i>j; i--){
			if(A[i]<A[i-1]){
				x=A[i];
				A[i]=A[i-1];
				A[i-1]=x;
				count++;
				Y=1;
			}
		}
	}	
	return count;
}
int main(void){
	int N,count,A[100];
	cin >> N;
	count=bubbleSort(A,N);
	for(int i=0; i<N; i++){
		if(i==N-1)cout << A[i];
		else cout << A[i] << " ";
	}
	cout << endl << count << endl;
}
