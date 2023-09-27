#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; ++i) cin >> A[i];
	
	for(int i = 0; i < n; ++i){
    	int key = A[i];
    	/* insert A[i] into the sorted sequence A[0,...,j-1] */
    	int j = i - 1;
    	while(j >= 0 && A[j] > key){
        	A[j+1] = A[j];
        	j--;
    	}
    	A[j+1] = key;
    	for(int k = 0; k < n - 1; ++k) cout << A[k] << " ";
    	cout << A[n - 1] << endl;
	}

	return 0;
}