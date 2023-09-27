#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
typedef long long ll;

int main()
{
	char a[100];
	cin >> a;
	int len= strlen(a);
	for (int i=len-1; i>=0; i--){
		cout << a[i];
	}
	cout << endl;
	return 0;
}

