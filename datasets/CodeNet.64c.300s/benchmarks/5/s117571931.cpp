#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int m[10];
	
	for(int i=0; i<10; ++i)
		scanf(" %d", &m[i]);
	
	sort(m, m+10, greater<int>());
	
	for(int i=0; i<3; ++i)
		printf("%d\n", m[i]);
		
	return 0;
}