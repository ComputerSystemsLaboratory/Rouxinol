#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <complex>

using namespace std;

const double PI=3.14159265;

int main()
{
	int n;
	unsigned long res=1;

	cin>>n;

	for(int i=2;i<=n;i++) res*=i;

	cout<<res<<endl;

	return 0;
}