#include <iostream>


int n;
int A[50];

bool solve(int i, int m){
	if(m == 0) return true;
	if(i >= n) return false;
	bool res = solve(i+1, m) || solve(i+1, m-A[i]);
	return res;
}

int main(){
	std::cin >> n;
	for(int i = 0; i < n; i++){
		std::cin >> A[i];
	}
	int q;
	std::cin >> q;
	int B[q];
	for(int i = 0; i < q; i++){
		std::cin >> B[i];
	}
	for(int i = 0; i < q; i++){
		if(solve(0, B[i])) std::cout << "yes" << std::endl;
		else std::cout << "no" << std::endl;
	}
	return 0;

}