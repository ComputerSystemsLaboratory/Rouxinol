#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int r,m=-1e9,min;
	int N;
	cin >> N;
	cin >> min;
	for(int j=0;j<N-1;j++){
		cin >> r;
		if(r-min>m)m=r-min;
		if(min>r)min=r;
	}
	cout << m << "\n";
	return 0;
}