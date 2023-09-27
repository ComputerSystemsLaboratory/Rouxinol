#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int n;
	string ac;

	while (cin >> n, n != 0){
		int count = 0;
		bool l = false, r = false;
		bool next = true;
		for (int i = 0; i < n; i++){
			cin >> ac;
			if (ac == "lu") l = true;
			if (ac == "ru") r = true;
			if (ac == "ld") l = false;
			if (ac == "rd") r = false;
			if (l == r&&l == next){
				count++;
				next = !next;
			}
		}
		cout << count << endl;
	}
	return 0;
}