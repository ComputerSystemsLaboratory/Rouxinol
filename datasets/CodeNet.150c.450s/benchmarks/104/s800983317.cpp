#include<iostream>
using namespace std;

int main(){

	int w, ww[30], n;
	char ab;
	int a, b;
	int temp;
	
	cin >> w >> n;
	for(int i = 0; i < w; i++) {
		ww[i] = i+1;
	}
	
	for(int i = 0; i < n; i++) {
		cin >> a >> ab >> b;
		temp = ww[b-1];
		ww[b-1] = ww[a-1];
		ww[a-1] = temp;
	}
	
	for(int i = 0; i < w; i++) {
		cout << ww[i] << endl;
	}

    return 0;
}