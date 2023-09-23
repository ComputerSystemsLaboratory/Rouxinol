#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int a[10],n;

bool cmp(int a,int b){
	return a > b;
}

int main()
{	
	for(int i=0;i<10;i++){
		cin >> a[i];
	}
	sort(a,a+10);
	for(int i=9;i>=7;i--) {
		cout << a[i] << endl;
	}
	return 0;	
}