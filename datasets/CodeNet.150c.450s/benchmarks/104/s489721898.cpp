#include <iostream>
using namespace std;

int main() {
	int w, n, a, b; cin >> w >> n; int arr[w]; char cha;
	for (int i = 0; i < w; i++) arr[i] = i + 1;
	for (int i = 0; i < n; i++) {
		cin >> a >> cha >> b; swap(arr[a - 1], arr[b - 1]);
	}
	for (int i = 0; i < w; i++) cout << arr[i] << endl;
	return 0;
}
