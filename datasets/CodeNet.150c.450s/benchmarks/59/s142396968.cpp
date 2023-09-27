#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
using namespace std;
#define len(n) (int)n.length()
#define dump cout
#define pb push_back
#define ll long long

int main()
{
	int N;
	cin >> N;
	
	int *a = new int[N];
	
	for (int i = 0; i < N; i++) {
	    cin >> a[i];
	}
	
	int v = 0;
			for (int k = 0; k < N - 1; k++) {
		    cout << a[k] << " ";
		}
		cout << a[N - 1] << endl;
	for (int i = 1; i < N; i++) {
	    v = a[i];
		int j = i - 1;
		while ((j >= 0) && (a[j] > v))
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
				for (int k = 0; k < N - 1; k++) {
		    cout << a[k] << " ";
		}
		cout << a[N - 1] << endl;
	}
	
	getchar();getchar();
	
	delete[] a;
	
	return 0;
}