#include <iostream>
using namespace std;

int main() {
	int M[28],A[31];
	for(int i=0;i<28;i++){
		cin >> M[i];
	}
	for(int i=0;i<28;i++){
		A[M[i]]=M[i];
	}
	for(int i=1;i<31;i++){
		if(A[i]==i){
			
		}
		else{
			cout << i << endl;
		}
	}
	return 0;
}