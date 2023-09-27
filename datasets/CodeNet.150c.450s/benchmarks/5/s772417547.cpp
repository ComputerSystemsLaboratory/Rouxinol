#include<iostream>
#include<vector>
#include<algorithm>
int n;
std::vector<int> a;
int main(){
	std::cin>>n;
	for(int i=0;i<n;++i){
		int x;
		std::cin>>x;
		a.push_back(x);
	}
	std::reverse(a.begin(),a.end());
	for(auto v:a){
		std::cout<<v;
		if(v!=*(a.end()-1))std::cout<<" ";
	}
	std::cout<<std::endl;
	return 0;
}