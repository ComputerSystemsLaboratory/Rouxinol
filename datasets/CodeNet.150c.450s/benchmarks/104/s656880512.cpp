#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int w, n;
	string str;
	cin >> w >> n;
	int ami[30];
	for (int i = 0; i < w; i++) {
		ami[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		int a, b, temp;
		string str;
		scanf("%d, %d",&a, &b);
		temp = ami[a-1];
		ami[a-1] = ami[b-1];
		ami[b-1] = temp;
	}
	for (int i = 0; i < w; i++) {
	cout << ami[i] <<endl;
	}
	
	return 0;
}