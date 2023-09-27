#include <iostream>

using namespace std;

int a[31];
int func(int n)
{
	if(a[n] > 0){
		return a[n];
	}
	
	return a[n] = func(n-1)+func(n-2)+func(n-3);
}

int main()
{
	int n, s;
	a[0] = a[1] = 1;
	a[2] = 2;
	a[30] = func(30);
	
	while(cin>>n && n){
		s = 0;
		for(int i = 1; i <= n; i++){
			s += a[i];
		}
		
		cout << a[n]/3650+1 << endl;
	}
	
	return 0;
}