#include <iostream>

using namespace std;

void swap(int& a,int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int w,n;
	int a,b;
	int perm[31];
	char dummy;
	
	cin >> w >> n;
	
	for (int i=1; i<=w; i++) perm[i] = i;
	
	for (int i=0; i<n; i++) {
		cin >> a >> dummy >> b;
		swap(perm[a], perm[b]);
	}
	
	for (int i=1; i<=w; i++) cout << perm[i] << endl;
	
	return 0;
}