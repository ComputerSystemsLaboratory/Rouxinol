#include <iostream>
#include <algorithm>
using namespace std;
int bubbleSort(int A[],int N){
	bool flag = true;
	int i = 0; 
	for(int s=0;flag;s++){
		flag = false;
		for(int j = N-1;j>=s+1;j--){
			if(A[j]<A[j-1]){
				swap(A[j],A[j-1]);
				flag = true;
				i++;
			}
		}
	}
	return i;
}
int main(){
	int A[100],N,i;
	cin >> N;
	for(int j = 0;j<N;j++) cin >> A[j];

	i = bubbleSort(A,N);
	for(int j = 0;j<N;j++){
		if(j)cout << " ";
		cout << A[j];
	}
	cout<<endl;
	cout<<i<<endl;

	return 0;
}
