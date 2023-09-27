#include<math.h>
#include <iostream>
using namespace std;

void Factorization(int v){
	int k = 2;
	while (v != 1 && k <= (int)sqrt((double) v)){
		if (v % k == 0){
			v = v / k;
			cout<<" "<<k;
			k = 2;
		}
		else
			k++;
	}
	cout<<" "<<v;
}

int main(){
	int n;
	cin>>n;
	cout<<n<<":";
	Factorization(n);
	cout<<endl;
	return 0;
}