#include <iostream>
int main(){
	int n,i,j;
	double x[4],y[4];
	std::cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<4;j++)std::cin>>x[j]>>y[j];
		if(((y[0]-y[1])/(x[0]-x[1]))==((y[2]-y[3])/(x[2]-x[3])))std::cout<<"YES\n";
		else std::cout<<"NO\n";
	}
}