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

const double EPS=(1e-10);

int main()
{
	int n;
	double x[4],y[4];

	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++) cin>>x[j]>>y[j];
		
		if( abs((y[1]-y[0])*(x[3]-x[2])-(y[3]-y[2])*(x[1]-x[0]))<EPS  ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}