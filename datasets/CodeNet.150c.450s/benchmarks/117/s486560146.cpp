#include <iostream>
#include<stack>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;
int merges(int start,int end) {
	int middle;
	if (start + 1 < end) {

		middle = (start + end) / 2;
		return (merges(start, middle) + merges(middle , end)-start+end);
	}
	else { return 0; }
}

int main()
{
	int n, dat[500000]; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> dat[i];
	}
	sort(dat, dat + n);
	for (int i = 0; i <n; i++)
	{
		if (i != 0) {
			cout << " ";
		}
		cout << dat[i];
	}
	
	cout << endl << merges(0, n) << endl;
	return 0;
}