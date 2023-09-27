#include <iostream>
#include <string>

using namespace std;

static const int MAX = 36;

int main(void)
{
	int N, minj;
	bool flag = true;
	string A[MAX], B[MAX];
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> A[i];
		B[i] = A[i];
	}
	//??????????????????
	for(int i=0;flag;i++){
		flag = false;
		for(int j=N-1;j>i;j--){
			if (A[j][1] < A[j-1][1]){
				swap(A[j], A[j-1]);
				flag = true;
			}
		}
	}
	for(int i=0;i<N;i++){
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << "Stable" << endl;
	//???????????????
	for(int i=0;i<N;i++){
		minj = i;
		for(int j=i+1;j<N;j++){
			if (B[j][1] < B[minj][1]){
				minj = j;
			}
		}
		if (minj != i) swap(B[i], B[minj]);
	}
	for(int i=0;i<N;i++){
		if (i > 0) cout << " ";
		cout << B[i];
	}
	flag = false;
	cout << endl;
	for(int i=0;i<N;i++){
		if (A[i] != B[i]){
			flag = true;
			break;
		}
	}
	if (flag){
		cout << "Not stable" << endl;
	}else{
		cout << "Stable" << endl;
	}
	return 0;
}