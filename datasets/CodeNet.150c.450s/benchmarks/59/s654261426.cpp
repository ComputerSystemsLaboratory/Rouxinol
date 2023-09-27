#include <iostream>
#include <vector>

template<typename T>
auto print(std::vector<T> array) 
 -> void{
	auto iterator = array.begin();
	std::cout<<*iterator;
	iterator++;
	for(;iterator!=array.end();++iterator){
		std::cout<<" "<< *iterator;
	}
	std::cout<<"\n";
}

auto main()
 -> int{

	std::cin.tie(0);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin>>n;

	std::vector<int> array(n);
	for(int i=0;i<n;i++)
		std::cin>>array[i];

	for(int i=1;i<n;i++){

		print(array);

		int key = array[i];
		int j = i - 1;
		while(j >= 0 && array[j]>key){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key;

	}

	print(array);

	return 0;
}