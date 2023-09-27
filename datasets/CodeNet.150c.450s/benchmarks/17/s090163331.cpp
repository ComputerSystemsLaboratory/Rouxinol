#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
typedef vector <int> vi;

int main(void){
	int n=5;
	vi a(n);
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(&a[0], &a[n], greater <int>());

	for (int i=0; i<n; i++){
		if (i==n-1) cout<<a[i]<<endl;
		else cout<<a[i]<<" ";
	}
	return 0;
}