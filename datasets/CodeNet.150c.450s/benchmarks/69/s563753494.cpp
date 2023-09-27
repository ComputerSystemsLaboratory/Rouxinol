#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int A[10];
		for(int j = 0; j < 10; j++){
			cin >> A[j];
		}
		int B[10] = {0}, C[10] = {0};
		int bIndex = 0, cIndex = 0;
		bool isYes = true;
		for(int j = 0; j < 10; j++){
			if(bIndex == 0){
				B[bIndex] = A[j];
				bIndex++;
			}else if(B[bIndex - 1] < A[j]){
				B[bIndex] = A[j];
				bIndex++;
			}else if(cIndex == 0){
				C[cIndex] = A[j];
				cIndex++;
			}else if(C[cIndex - 1] < A[j]){
				C[cIndex] = A[j];
				cIndex++;
			}else{
				isYes = false;
				break;
			}
		}
		if(isYes){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}