#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
	int a=0, b=1, n;
	cin>>n;
	if (n<0) return NULL;

	for (int i=-1; i<n; i++){
		a += b;
		swap(a,b);
	}
	cout<<a<<endl;
	return 0;
} 