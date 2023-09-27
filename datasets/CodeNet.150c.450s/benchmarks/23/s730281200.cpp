// ALDS1_10_A
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	vector<int> fib;

	cin>>n;
	for(int i=0;i<=n;i++){
		if(i <= 1)
			fib.push_back(1);
		else
			fib.push_back(fib[i-1]+fib[i-2]);
	}
	
	cout<<fib[n]<<endl;

	return 0;
}