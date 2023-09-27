#include <iostream>
#include <string>
using namespace std;

int m, c, x, ii = 0;

void mcxiDisassembly(string& mcxi){
	int sum = 0;
	int number = 0;
	for (int i = 0; i <= mcxi.length(); i++){
		if (mcxi[i] != 'm' && mcxi[i] != 'c' && mcxi[i] != 'x' && mcxi[i] != 'i'){
			number = (int)(mcxi[i] - '0');
		}
		else{
			switch (mcxi[i]){
			case 'm':	if (number == 0){
							m += 1;
						}
						else{
							m += number;
						}
						break;

			case 'c':	if (number == 0){
							c += 1;
						}
						else{
							c += number;
						}
						break;

			case 'x':	if (number == 0){
							x += 1;
						}
						else{
							x += number;
						}
						break;

			case 'i':	if (number == 0){
							ii += 1;
						}
						else{
							ii += number;
						}
						break;
			}
			number = 0;
		}
	}
}

void show(){
	if (m != 0){
		if (m == 1){
			cout << 'm';
		}
		else{
			cout << m << 'm';
		}
	}
	if (c != 0){
		if (c == 1){
			cout << 'c';
		}
		else{
			cout << c << 'c';
		}
	}
	if (x != 0){
		if (x == 1){
			cout << 'x';
		}
		else{
			cout << x << 'x';
		}
	}
	if (ii != 0){
		if (ii == 1){
			cout << 'i';
		}
		else{
			cout << ii << 'i';
		}
	}
	cout << endl;
}

int main(){
	string mcxi1,mcxi2;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> mcxi1 >> mcxi2;
		//????§£
		mcxiDisassembly(mcxi1);
		mcxiDisassembly(mcxi2);
		if (ii >= 10){
			x += ii / 10;
			ii -= (ii/10) * 10;
		}
		if (x >= 10){
			c += x / 10;
			x -= (x / 10) * 10;
		}
		if (c >= 10){
			m += c / 10;
			c -= (c / 10) * 10;
		}
		//??¨???
		show();
		m = c = x = ii = 0;
	}
	return 0;
}