#include <iostream>
using namespace std;


char* reverse(char *A){
	char* save = A;
	while (*A) {
		++A;
	}
	char* p = save;
	--A;
	for (; p < A; --A) {
		char t = *A;
		*A = *p;
		*p = t;
		++p;
	}
	return save;
}


int main() {
	char A[100];
	cin >> A;
	cout << reverse(A) << endl;
}
