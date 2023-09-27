#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

std::bitset<100000000> array(0);
auto eratosthenes(long long int n)
 -> void{
	for(long long int i = 0; i < n;i++){
		array[i] = 1;
	}
	array[0] = 0;
	array[1] = 0;
	for(long long int i = 2; i <= sqrt(n);i++){
		if(array[i]){
			for(long long int j = 0;i*(j+2) <= n;j++){
				array[i*(j+2)] = 0;
			}
		}
	}
}

auto main()
 -> int{

	std::cin.tie(0);
	std::ios_base::sync_with_stdio(false);

	long long int n, a, Max = 0, result = 0;

	std::cin>>n;
	std::vector<int> A(n);
	for(auto &a : A){
		std::cin>> a;
		if(Max < a){
			Max = a;
		}
	}

	eratosthenes(Max+1);

	for(auto a : A){
		if(array[a]){
			result++;
		}
	}
	std::cout<<result<<"\n";
	return 0;
}