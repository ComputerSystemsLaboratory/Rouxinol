#include<iostream>
using namespace std;

int main(){
	int a,n,min=1000000,max=-1000000;
	long long int s=0;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> a;
		s += a;

		if(a>max) max=a;
		if(a<min) min=a;
	}
	
	cout << min << " " << max << " " << s << "\n";
	return 0;
}