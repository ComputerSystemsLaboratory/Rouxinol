#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, minj, count = 0;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++)
		cin >> A[i];

	for(int i = 0; i < n; i++){
		minj = i;
		for(int j = i; j < n; j++){
			if(A[j] < A[minj])
				minj = j;
		}
      swap(A[i], A[minj]);
	   if(i != minj)
           count++;
	}

	for(int i = 0; i < n; i++){
		if(i > 0)
			cout << " ";
		cout << A[i];
	}
	cout << endl << count << endl;
	return 0;
}