#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int a;
	int yama[10];
	for(a=0;a<10;a++){
		cin >> yama[a];
	}
	sort(yama,yama + 10,greater<int>());
	for(a=0;a<3;a++){
		cout << yama[a] << endl;
	}
	return 0;
}