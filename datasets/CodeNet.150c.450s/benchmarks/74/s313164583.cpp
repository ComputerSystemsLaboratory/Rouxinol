#include <iostream>
#include <vector>
#include <cmath>

template<typename T>
auto print(std::vector<T> array,bool reverse = false) 
 -> void{
 	if(reverse){
		auto iterator = array.rbegin();
		std::cout<<*iterator;
		iterator++;
		for(;iterator != array.rend();++iterator){
			std::cout<<" "<< *iterator;
		}

	}else{
		auto iterator = array.begin();
		std::cout<<*iterator;
		iterator++;
		for(;iterator != array.end();++iterator){
			std::cout<<" "<< *iterator;
		}
	}
	std::cout<<"\n";
}

template<typename T>
auto println(std::vector<T> array) 
 -> void{
	for(auto v : array){
		std::cout<< v <<"\n";
	}
}


auto main()
 -> int{

	std::cin.tie(0);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	std::cin>> n >> m;

	std::vector<int> array(m);
	for(int i=0;i < m;i++)
		std::cin>>array[i];

	std::vector<int> T(n+1);
	for(auto &v : T){
		v = 1 << 24;
	}
	T[0] = 0;

	for(int i = 0;i <= m+1;i++){
		for(int j = array[i];j <= n;j++){
			T[j] = std::min(T[j], T[j - array[i]] + 1);
		}
	}

	std::cout<<T[n]<<"\n";

	return 0;
}