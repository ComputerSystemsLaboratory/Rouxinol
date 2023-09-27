#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0;i<N;i++){
		cin >> A[i];
	}

	int count=0;
	int flag=1;	//????????£??\????´??????????????????????
	while(flag){
		flag=0;
		for(int i=N-1;i>=1;i--){
			if(A[i-1] > A[i]){
				flag=1;
				int tmp = A[i];
				A[i] = A[i-1];
				A[i-1] = tmp;
				count++;
			}
		}
	}

	for(int i=0;i<N-1;i++){
		cout << A[i] << " ";
	}
	cout << A[N-1] << endl;
	cout << count << endl;

	return 0;
}