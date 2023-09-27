#include<iostream>
#include<algorithm>
int a[3];
int main(){
	for(int i=0;i<3;++i){
		std::cin>>a[i];
	}
	std::sort(std::begin(a),std::end(a));
	std::cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<std::endl;
	return 0;
}