#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int w, n;
	int line[30];

	cin >> w;
	cin >> n;

	for(int i = 0; i < 30; i++){
		line[i] = i+1;
	}

	for(int i = 0; i < n; i++){
		int a, b;
		scanf("%d,%d", &a, &b);
		swap(line[a-1], line[b-1]);
	}

	for(int i = 0; i < w; i++){
		cout << line[i] << endl;
	}

	return 0;
}