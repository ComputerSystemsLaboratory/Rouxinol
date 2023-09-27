#include <iostream>
using namespace std;

int main() {
	int n,i,r,min = 1000000000,max = -1000000000;
	
	cin >> n;
	
	cin >> min;
	for(i=1;i<n;++i){
		cin >> r;
		
		if(r - min > max){
			max = r - min;
		}
		if(r < min){
			min = r;
		}
	}
	
	cout << max << endl;
	return 0;
}