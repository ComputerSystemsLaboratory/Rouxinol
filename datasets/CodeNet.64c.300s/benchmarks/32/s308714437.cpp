#include <iostream>
#include <limits>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a;
	long long int mina, maxa, suma;
	cin>>n>>a;
	mina=maxa=suma=a;
	for(int i=1; i<n; i++) {
		cin>>a;
		if(mina>a) mina=a;
		if(maxa<a) maxa=a;
		suma+=a;
	}
	cout<<mina<<' '<<maxa<<' '<<suma<<'\n';
	return 0;
}

