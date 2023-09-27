#include<iostream>
#include<vector>
#include<algorithm>
int n,x;
std::vector<int> vec;
long long int num(){
	long long int lli=0;
	for(auto v:vec){
		lli+=static_cast<long long int>(v);
	}
	return lli;
}
int main(){
	std::cin>>n;
	for(int i=0;i<n;++i){
		std::cin>>x;
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end());
	std::cout<<*vec.begin()<<" "<<*(vec.end()-1)<<" "<<num()<<std::endl;
	return 0;
}