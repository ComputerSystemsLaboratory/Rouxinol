#include<iostream>
using namespace std;

int main(){
	int w, line[100], n, a, b, c;
	char x;

	cin >> w >> n;
	for (int i = 0; i < w; i++){
		line[i] = i + 1;
	}

	for (int i = 0; i < n; i++){
		cin >> a >> x >> b;
		c = line[a-1];
		line[a-1] = line[b-1];
		line[b-1] = c;
	}

	for (int i = 0; i < w; i++){
		cout << line[i] << endl;
	}

	return 0;
}
