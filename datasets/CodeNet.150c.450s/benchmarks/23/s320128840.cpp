#include <iostream>

using namespace std;

int main()
{
	int a=1,b=1,n;
	cin>>n;
	for (int i=0; i<n-1; i++) {
		swap(a,b);
		a+=b;
	}
	cout<<a<<endl;
}