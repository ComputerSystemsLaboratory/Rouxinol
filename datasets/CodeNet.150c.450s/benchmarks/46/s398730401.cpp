#include <iostream>
#include <vector>
int number(int const &n,int const &x)
{
	std::vector<std::vector<std::vector<int>>>v(n+1,std::vector<std::vector<int>>(3+1,std::vector<int>(x+1,0)));
	//v[p][q][r] means choose q numbers from {1,,,p} to make the sum equal to r;
	v[0][0][0] = 1;
	for(int q = 1 ; q <= 3 ; q ++){
		for(int r = 1 ; r <= x ; r ++){
			v[0][q][r] = 0;
		}
	}
	for(int p = 0 ; p <= n ; p ++){
		v[p][0][0] = 1;
		for(int q = 1 ; q <= 3 ; q ++){
			v[p][q][0] = 0;
		}
		for(int r = 1 ; r <= x ; r ++){
			v[p][0][r] = 0;
		}
	}

	for(int p = 1 ; p <= n ; p ++){
		for(int q = 1; q <= 3 ; q ++){
			for(int r = 1; r <= x ; r ++){
				v[p][q][r] += v[p-1][q][r];
				if(r - p >= 0) v[p][q][r] += v[p-1][q-1][r-p];
			}
		}
	}
	return v[n][3][x];
}



int main(int argc, char const *argv[])
{
	int n,x;
	while(std::cin>> n >> x){
		if(n == 0 && x == 0) break;
		std::cout << number(n,x) << std::endl;;
	}
	return 0;
}