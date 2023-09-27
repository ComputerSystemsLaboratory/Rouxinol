#include<iostream>
#include<string>
using namespace std;
int main(){
	int h,m;
	string all, l, r;
	while (1){
		cin >>all>> m;
		if (all == "-")break;
		for (int i = 0; i < m; i++){
			cin >> h;
			l = all.substr(0, h);
			r = all.substr(h, -1);
			all = r + l;
		}
		cout << all << endl;
		
	}
	return 0;
}