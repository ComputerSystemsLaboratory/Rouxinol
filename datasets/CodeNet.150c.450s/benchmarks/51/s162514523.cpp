#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	bool is[30];
	fill(is, is + 30, false);
	for(int i = 0; i < 28; i++){
		int a;
		cin >> a;
		a--;
		is[a] = true;
	}
	for(int i = 0; i < 30; i++){
		if(!is[i]) cout << i + 1 << endl;
	}
	return 0;
}
