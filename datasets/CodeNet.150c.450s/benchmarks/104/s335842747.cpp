#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int t;
	t = a;
	a = b;
	b = t;
}

int main(){
	const int max = 30;
	int w;
	int n;
	int nums[max + 1];
	cin >> w;
	for(int i = 1; i <= w; i++)
		nums[i] = i;
	cin >> n;
	for(int j = 0; j < n; j++){
		int a, b;
		char c;
		cin >> a >> c >> b;
		swap(nums[a], nums[b]);
	}
	for(int k = 1; k <= w; k++)
		cout << nums[k] << endl;
	return 0;
}