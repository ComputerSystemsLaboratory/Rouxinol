#include<iostream>
#include<vector>
std::vector<int> vec;
int x;
int n=1;
int main(){
	do{
		std::cin>>x;
		vec.push_back(x);
	}while(x!=0);
	for(auto l:vec){
		if(l!=0)std::cout<<"Case "<<n<<": "<<l<<std::endl;
		++n;
	}
	return 0;
}