#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
	int n;

	while(cin>>n && n){
		int m = 10000000;

		for(int z=0;z*z*z<=n;z++){
			for(int y=0;z*z*z+y*y<=n;y++){
				m = min(z+y+(n-z*z*z-y*y), m);
			}
		}
		cout<<m<<endl;
	}

	return 0;
}