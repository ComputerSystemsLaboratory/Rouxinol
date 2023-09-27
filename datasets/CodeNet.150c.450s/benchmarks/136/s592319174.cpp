#include<iostream>
#include<algorithm>
#include<vector>
int main(){
	long int a, b, product;

  	while (std::cin >> a >> b) {
    	product = a * b;
		std::vector<long int> v = {a, b};
    	while (v.at(0) != v.at(1)) { 
      		std::sort(v.begin(), v.end(), std::greater<long int>());
      		v.at(0) = v.at(0) - v.at(1);
		}	
    	std::cout << v.at(0) << " " << product/v.at(0) << std::endl;	
  	}
	return 0;
}