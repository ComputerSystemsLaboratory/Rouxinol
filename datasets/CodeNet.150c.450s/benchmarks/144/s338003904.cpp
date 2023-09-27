#include <iostream>
#include <vector>


int main(int argc, char **argv){
	int n = 0;
	int m = 0;
	int l = 0;
	std::vector<std::vector<long> > A;
	std::vector<std::vector<long> > B;

	std::cin >> n >> m >> l;
	A.resize(n);
	B.resize(m);
	for(int r = 0; r < n; r++){
		A[r].resize(m, 0);
	}
	for(int r = 0; r < m; r++){
		B[r].resize(l, 0);
	}

	for(int r = 0; r < n; r++){
		for(int c = 0; c < m; c++){
			std::cin >> A[r][c];
		}
	}
	for(int r = 0; r < m; r++){
		for(int c = 0; c < l; c++){
			std::cin >> B[r][c];
		}
	}

	for(int r = 0; r < n; r++){
		for(int c = 0; c < l; c++){
			long v = 0;
			for(int k = 0; k < m; k++){
				v += A[r][k] * B[k][c];	
			}
			std::cout << v;
			if(c < l - 1){
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}