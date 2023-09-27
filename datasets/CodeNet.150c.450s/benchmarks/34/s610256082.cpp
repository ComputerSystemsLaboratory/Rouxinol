#include <iostream>

using namespace std;
int N;
int A_count(int x){
	if (x == 0){
		return 1;
	}else if (x == 1){
		return 1;
	}else if (x == 2){
		return 2;
	}else{
		return (A_count(x-1) + A_count(x-2) + A_count(x-3));
	}
}

int main() {
	while (cin >> N && N){
		cout << (((A_count(N)+9)/10)+364)/365 << endl;		
	}
	return 0;
}