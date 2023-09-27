#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[5];
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	sort(a,a+5);
	
	cout<<a[4]<<' '<<a[3]<<' '<<a[2]<<' '<<a[1]<<' '<<a[0]<<endl;
		
	return 0;
}