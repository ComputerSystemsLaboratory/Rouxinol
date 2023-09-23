#include <iostream>
using namespace std;

//0014
int main(){
	int d;
	const int n = 600;
	
	while(cin >> d){
		int sum=0;
		int x=0;
		for(int i=0; i<n/d; ++i){
			sum+=d*x*x;
			x+=d;
		}
		cout << sum << endl;
	}
	return 0;
}