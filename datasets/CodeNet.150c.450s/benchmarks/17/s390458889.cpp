#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
int main(){
	std::vector<int> a(5);
	for(int i=0;i<5;i++)std::cin>>a[i];
	sort(a.begin(),a.end(),std::greater<int>());
	for(int i=0;i<4;i++)std::cout<<a[i]<<" ";
	std::cout<<a[4]<<std::endl;
	return 0;
}