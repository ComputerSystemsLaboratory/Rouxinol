#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int a[50],b[50];

int main(){

	int w,h;
	cin>>w>>h;
	for (int i = 0; i < h; i++)
	{
		char c;
		cin>>a[i]>>c>>b[i];
		a[i]--; b[i]--;
	}

	vector<int> v(w);
	for (int i = 0; i < w; i++)
	{
		v[i] = i+1;
	}

	for (int i = 0; i < h; i++)
	{
		swap(v[a[i]],v[b[i]]);
	}

	for (int i = 0; i < w; i++)
	{
		cout << v[i] << endl;
	}


	return 0;
}