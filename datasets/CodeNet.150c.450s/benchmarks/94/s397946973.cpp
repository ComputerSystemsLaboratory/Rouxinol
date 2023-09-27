#include <ios>
#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);

	int n, i, j, c = 0, a[100] = {};
	cin >> n;
	for(i = 0; i < n; ++i)
		cin >> a[i];

	for(i = 0; i < n; ++i){
		for(j = n-1; j > i; --j){
			if( a[j] < a[j-1] ){
				swap(a[j], a[j-1]);
				++c;				
			}
		}
	}

	for(i = 0; i < n; ++i){
		cout << a[i];
		if( i != n-1 )
			cout << " ";
	}
	cout << "\n" << c << "\n";

	return 0;
}