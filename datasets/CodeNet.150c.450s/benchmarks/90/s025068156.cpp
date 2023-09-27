#include <iostream>
using namespace std;


int main(){

	int n,max=0,x[100]={0};
	int x_max;
	
	while (scanf("%d",&n)!=EOF) {
		x[n-1]++;
	}
	
	for (int i=0; i<100; i++) {
		if (max<x[i]) {
			max=x[i];
			x_max=i;
		}
	}
	cout << x_max+1 << endl;
	
	for (int i=x_max+1; i<100; i++) {
		if (x[x_max]==x[i]) {
			cout << i+1 <<endl;
		}
	}
		
	return 0;
}