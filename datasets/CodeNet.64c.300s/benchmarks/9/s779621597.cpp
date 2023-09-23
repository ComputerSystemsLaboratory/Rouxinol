#include<iostream>
#include<cmath>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
    std::cin.tie(0);
	
	int n=0;cin>>n;
	double a=100000;
	for(int i=0;i<n;i++){
		a*=1.05;
		a/=1000;a=ceil(a);a*=1000;
	}
	
	cout<<(int)a<<endl;
	return 0;
}