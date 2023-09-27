#include <iostream>
#include <math.h>
using namespace std;

void Factorization(int v){
	int k = 2;
	while (v != 1 && k <= sqrt((double) v)){
		if (v % k == 0){
			v = v / k;
			if(v == 1){
				cout<<" "<<k;
				return;
			}
			Factorization(k);
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