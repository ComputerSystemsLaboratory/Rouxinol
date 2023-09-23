#include <iostream>
using namespace std;
int main(){
	int n,a;
	cin >> n;
	int max = -1000001;
	int min =  1000001;
	long sum = 0;
	for(int i=0;i<n;i++){
		cin >> a;
		sum = sum + a;
		if(max<a) max = a;
		if(min>a) min = a;
	}
	cout << min << " " << max << " " << sum << endl;
}