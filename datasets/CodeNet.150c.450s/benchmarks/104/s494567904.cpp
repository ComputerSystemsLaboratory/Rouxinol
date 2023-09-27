#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x[30],w;
	cin >> w;
	for(int i = 1; i <= w; i++){
		x[i] = i;
	}
	
	int n, a, b;
	char c;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> c >> b;
		swap(x[a],x[b]);
	}
	
	for(int i = 1; i <= w; i++){
		cout << x[i] << endl;
	}
}