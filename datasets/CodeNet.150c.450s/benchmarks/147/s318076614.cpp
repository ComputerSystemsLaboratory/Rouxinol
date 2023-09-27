#include <bits/stdc++.h>
#define f(i) for (int i=1 ; i<100 ; i++)
using namespace std;

int main(){
	
	int f[100000]={0},n; cin >> n;
		
	f(a)
		f(b)
			f(c) f[a*a+b*b+c*c+a*c+a*b+b*c]++;
				
	for (int i=1 ; i<=n ; i++) cout << f[i] << "\n";
	
	return 0;
}