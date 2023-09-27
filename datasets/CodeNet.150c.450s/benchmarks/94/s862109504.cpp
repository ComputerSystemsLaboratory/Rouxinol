#include<iostream>
using namespace std;
int bubbleSort(int (&A)[100],int N){
	int j, tmp, cnt = 0, flag = 1;
	while(flag){
		flag = 0;
		for(j=N-1;j>=1;j--){
			if(A[j] < A[j-1]){
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] =tmp;
				cnt++;
				flag = 1;
			}
		}
	}
	return cnt;
}

int main(){
	int n, cnt, a[100], i;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	cnt = bubbleSort(a, n);
	cout << a[0];
	for(i=1;i<n;i++){
		cout << " " << a[i];
	}
	cout << endl << cnt << endl;
	return 0;
}