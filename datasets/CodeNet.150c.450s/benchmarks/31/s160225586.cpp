#include <iostream>
using namespace std;
int main(){

	int n,x[1000000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x[i];
	}
	int max = x[1]-x[0];
	int min = x[0];
	for(int k=1;k<n;k++){
		if(max < (x[k] - min))
			max = (x[k] - min);
		if(min > x[k])
			min = x[k];
	}
	cout << max << endl;
}