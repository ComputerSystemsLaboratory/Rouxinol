#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,l,r,hantei,count;
	string s;
	while(1){
		l = r = hantei = count = 0;
		cin >> n;
		if(n == 0)break;
		for(int i = 0;i < n;i++){
			cin >> s;
			if(s == "lu"){
				l = 1;
			}
			else if(s == "ru"){
				r = 1;
			}
			else if(s == "ld"){
				l = 0;
			}
			else if(s == "rd"){
				r = 0;
			}
			if(l == 1 && r == 1 && hantei == 0){
				count++;
				hantei = 1;
			}
			else if(l == 0 && r == 0 && hantei == 1){
				count++;
				hantei = 0;
			}
		}
		cout << count << endl;
	}
	return 0;
}