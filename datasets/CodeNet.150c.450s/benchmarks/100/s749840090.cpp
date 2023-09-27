#include<iostream>
using namespace std;
int main(){
	long long n,b;
	std::cin>>n;
	b=1;
	for(int i=0 ;i<n ; i++)   b *= n -i ;
	std::cout<<b<<endl;
}