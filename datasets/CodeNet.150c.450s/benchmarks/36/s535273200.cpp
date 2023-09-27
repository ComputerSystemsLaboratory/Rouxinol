#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
	int n;

	while (cin>>n){
		double s=0;
		for (int i=n; i<600; i+=n)
			s += i*i*n;
		cout<<fixed<<setprecision(0)<<s<<endl;
	}
    return 0;
}