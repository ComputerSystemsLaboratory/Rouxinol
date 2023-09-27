#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n;cin>>n;
	int a=100;
	for(int i=0;i<n;i++)
	{
		a=(int)ceil(a*1.05);
	}
	cout<<a*1000<<endl;
	return 0;
}