#include<iostream>
#include<vector>
typedef std::vector<int> Vector_i;
void CountingSort(Vector_i &A, Vector_i &B, int k) {
	Vector_i C(k + 1, 0);
	//C[i]???i???????????°????¨?????????????
	for (unsigned int j = 0; j < A.size(); ++j) {
		C[A[j]] ++;
	}	
	//C[i]???i??\????????°???????????°????¨??????????
	for (int i = 0; i < k; ++i) {
		C[i + 1] += C[i];
			}
	for (int i = 0; i <= k; ++i) {
		C[i ] --;
	}
	for (int j = A.size()-1 ; j >= 0; --j) {
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}
	return;
}
int main(void) {
	int n, k = 0;;
	std::cin >> n;
	Vector_i A(n, 0);
	Vector_i B(n, 0);
	for (int i = 0; i < n; ++i) {
		std::cin >> A[i];
		if (k < A[i]) { k = A[i]; }
	}

	CountingSort(A, B, k);
	for (unsigned int i = 0; i < B.size(); ++i) {
		if (i == B.size() - 1) { std::cout << B[i] << std::endl; }
		else {
			std::cout << B[i] << " ";
		}
	}
//	system("pause");
	return 0;
}