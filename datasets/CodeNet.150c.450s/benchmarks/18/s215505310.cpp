#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long money=100000;
	int n;
	cin >> n;
	
	for(int i=0; i<n; ++i){
		money*=1.05;
			
		if(money%1000!=0)
			money+= 1000-(money%1000);
	}

	printf("%ld\n",money);
	
	return 0;
}