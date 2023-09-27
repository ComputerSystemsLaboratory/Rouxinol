#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main() {
	
	char c[20];
	int n=0;
	
	while(cin>>c[n])n+=1;
	
	for(int i=n-1;i>=0;i--)cout<<c[i];
	cout<<endl;
	
	return 0;
}