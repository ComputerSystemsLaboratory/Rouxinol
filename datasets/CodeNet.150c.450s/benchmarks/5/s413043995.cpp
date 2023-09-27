#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i =0;i < n;i++){
		cin >> a[i];
		}
	int b[n];
		
	for(int i = 0;i < n;i++){
		b[i] = a[n - i - 1];
		cout << b[i];
		if(i < n - 1) cout << " ";
		}
	cout << endl;
	return 0;
	}		