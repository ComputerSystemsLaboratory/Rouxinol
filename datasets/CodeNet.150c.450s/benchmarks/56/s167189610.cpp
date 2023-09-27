#include <iostream>
#include <cstdio>
int main(){
	int n,i,a,min,max;
	long long sum=0;
	std::cin >> n;
	for(i=0;i<n;i++){
		std::cin >> a;
		if(i==0){
			min=a;
			max=a;
			}
		if(min>a) min=a;
		if(max<a) max=a;
			sum=sum+a;
		}
		std::cout << min << " " << max << " " << sum <<std::endl;
	return 0;
}