#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int a, b;
	while (cin>>a>>b) {
		int c = to_string(a + b).length();
		printf("%d\n", c);
	}
}