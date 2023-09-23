#include <iostream>
using namespace std;
int n,count;
int main(){
	while(1){
		cin >> n;
		if(n==0)break;
		n=1000-n;
		count=0;
		count+=n/500;
		n=n%500;
		count+=n/100;
		n=n%100;
		count+=n/50;
		n=n%50;
		count+=n/10;
		n=n%10;
		count+=n/5;
		n=n%5;
		count+=n;
		cout << count <<endl;
	}
	return 0;
}