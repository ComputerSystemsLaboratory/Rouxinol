#include <iostream>
using namespace std;

int main()
{
	int w, n, a, b;
	char abdata;
	int wdata[1000];
	cin >> w >> n;
	for (int i = 0; i < w; i++) {
		wdata[i] = i+1;
	}
	for (int k = 0; k < n; k++) {
		int data;
		cin >> a >> abdata >> b;
		data = wdata[a-1];
		wdata[a-1] = wdata[b-1];
		wdata[b-1] = data;
	}
	for (int y = 0; y < w; y++) {
		cout << wdata[y] << endl;
	}
}