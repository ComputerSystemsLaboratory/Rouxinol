#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	int A[101];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	for(int i = 0; i < n-1; i++) cout << A[i] << " ";
	cout << A[n-1] << endl;
	
	for(int i = 1; i < n; i++ ){
		int key = A[i];
		int j = i -1;
		while(j > -1 && A[j] > key){
			A[j+1] = A[j];
			j = j -1;
		}
		A[j+1] = key;
		for(int k = 0; k < n-1; k++) cout << A[k] << " ";
		cout << A[n-1] << endl;
	}
	
	return 0;
}