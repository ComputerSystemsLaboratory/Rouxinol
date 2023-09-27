#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long fuc(long long n){
	if(n==0)
		return 1;
	else
		return n*fuc(n-1);
}

int main(){

	long long n;
	while(cin>>n)
		cout<<fuc(n)<<endl;


	return 0;
}