#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int func(int y, int m, int d);

int main()
{
	int n, m, p;
	while(1){
		cin >> n >> m >> p;
		if(n == 0 && m == 0 && p == 0) break;
		int a[100], sum = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
		}
		int b, c;
		b = sum * (100 - p);
		if (a[m-1] == 0) c = 0;
		else c = b / a[m-1];
		cout << c << endl;
	}
	return 0;
}