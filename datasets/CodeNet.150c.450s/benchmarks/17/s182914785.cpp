#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int a[5];
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	sort(a, a+5, greater<int>());
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
	return 0;
}