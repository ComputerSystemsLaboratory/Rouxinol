#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	int z;
	cin >> x >> y>>z;
	if (x<y&&y<z){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	return 0;
}