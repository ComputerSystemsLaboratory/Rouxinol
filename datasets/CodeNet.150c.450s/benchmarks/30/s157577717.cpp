#include<iostream>
using namespace std;
int selectionSort(int (&A)[100],int N){
	int i, j, minj, tmp, cnt=0;
	for(i=0;i<N;i++){
		minj = i;
		for(j=i;j<N;j++){
			if(A[j] < A[minj])
				minj = j;
		}
		if(A[i] != A[minj])
			cnt++;
		tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
	}
	return cnt;
}

int main(){
	int n, cnt, a[100], i;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	cnt = selectionSort(a, n);
	cout << a[0];
	for(i=1;i<n;i++){
		cout << " " << a[i];
	}
	cout << endl << cnt << endl;
	return 0;
}