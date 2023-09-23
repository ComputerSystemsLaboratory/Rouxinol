#include <iostream>
using namespace std;
int main(){
	int sum, d, tmp;
	while(cin>>d){
		sum = 0;
		tmp = d;
		while(tmp < 600){
			sum += tmp*tmp*d;
			tmp += d;
		}
		cout<<sum<<endl;
	}
	return 0;
}
