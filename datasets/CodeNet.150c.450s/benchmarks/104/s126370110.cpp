#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int w, n;
	int pos[30];
	
	scanf("%d %d", &w, &n);
	
	for (int i = 1; i <= w; i++){
		pos[i - 1] = i;
	}
	
	for (int i = 0; i < n; i++){
		int a, b;
		scanf("%d,%d", &a, &b);
		
		swap(pos[a - 1], pos[b - 1]);
	}
	
	for (int i = 0; i < w; i++){
		printf("%d\n", pos[i]);
	}
	
	return (0);
}