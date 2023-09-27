#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	double sq;
	cin>>n;
	cout<<n<<":";
	sq = sqrt(n);

	while(1){
		if(n%2) break;
		n /=2;
		cout<<" 2";
	}

	for(int i=3;i<sq;i+=2){
		if(n%i) continue;
		n /= i;
		cout<<" "<<i;
		i -= 2;
	}

	if(n != 1)cout<<" "<<n;

	cout<<endl;
	return 0;
}