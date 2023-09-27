#include<iostream>
#include<vector>
#include<algorithm>
std::vector<std::vector<int>> vec;
std::vector<int> invec;
int x1,x2;
std::vector<int> rvec(std::vector<int> vector){
	return vector;
}
int n=1;
int main(){
	while(1){
		std::cin>>x1>>x2;
		invec.push_back(x1);
		invec.push_back(x2);
		sort(invec.begin(),invec.end());
		if(invec==rvec({0,0})){
			break;
		}else {
			vec.push_back(invec);
			invec.erase(invec.begin(),invec.end());
		}
	}
	for(auto i:vec){
		std::cout<<*i.begin()<<" "<<*(i.end()-1)<<std::endl;
	}
	return 0;
}