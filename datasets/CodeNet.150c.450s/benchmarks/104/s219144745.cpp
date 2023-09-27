#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int w;cin>>w;
	int n;cin>>n;
	vector<int>P(w+1);
	for ( int i=0; i<=w; i++ )
		P[i]=i;
	for ( int i=0; i<n; i++ )
	{
		int a,b;
		char c;
		cin>>a>>c>>b;
		swap(P[a],P[b]);

	}
	for ( int i=1; i<=w; i++ )
		cout << P[i]<<endl;
	return 0;



}