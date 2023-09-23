#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	int z;
	int a;
	int b;
	cin >> x >> y>>z>>a>>b;
	if (x<z+b){
		cout << "No\n";
	}
	else if(0>z-b){
		cout << "No\n";
	}else if (y<a + b){
		cout << "No\n";
	}
	else if (0>a- b){
		cout << "No\n";
	}
	else {
		cout << "Yes\n";
	}
	return 0;
}