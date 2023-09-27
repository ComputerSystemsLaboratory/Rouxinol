#include<iostream>

using namespace std;
int main(){
	while (true){
		int g = 0;
		int s = 0;
		int st = 0;
		cin >> g >> s;
		if (g == 0 && s == 0){
			break;
		}
		for (int i = 1; i <= g; i++){
			for (int b = i + 1; b <= g; b++){
				for (int c = b + 1; c <= g; c++){
					if (i + b + c == s){
						st++;
					}
				}
			}
		}
		cout << st << endl;
	}
}