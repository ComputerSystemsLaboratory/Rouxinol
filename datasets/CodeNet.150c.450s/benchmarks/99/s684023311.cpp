#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int McxiTen (char *c) {
	
	//cout << "/*" << c << endl;
	int i = 0; //strlen(c);
	int n = 0;
	
	while(i < strlen(c)) {
		int tmp = 1;
		
		//cout << "." << c[i];
		if(isdigit(c[i])) {
			tmp = c[i] - '0';
			//cout << "->" << tmp << endl;
			i++;
		} else {
		}
		
		switch(c[i]) {
			case 'i' : n += tmp; break;
			case 'x' : n += tmp * 10; break;
			case 'c' : n += tmp * 100; break;
			case 'm' : n += tmp * 1000; break;
			default : break;
		}
		//cout << " " << n << endl;
		i++;
	}
	
	//cout << endl << n << endl << "*/" << endl;
	
	return n;
}

void TenMcxi (int n, char *c) {
	int ns[4];
	
	ns[0] = n / 1000;
	n = n % 1000;
	ns[1] = n / 100;
	n = n % 100;
	ns[2] = n / 10;
	n = n % 10;
	ns[3] = n;
	
	int j = 0;
	for(int i = 0; i < 4; i++) {
		if(ns[i] != 0) {
			if(ns[i] != 1) {
				c[j++] = (char)(ns[i] + '0');
				//cout << c << endl;
			}
			switch(i) {
				case 0 : c[j++] = 'm'; break;
				case 1 : c[j++] = 'c'; break;
				case 2 : c[j++] = 'x'; break;
				case 3 : c[j++] = 'i'; break;
			}
			
			//cout << c << endl;
		}
	}
	c[j] = '\0';
	
	return;
}


int main(void) {
	char a[1000], b[1000];
	int n;
	
	cin >> n;
	while(cin >> a >> b) {
		char c[9999];
		//cout << "s: " << a << ", " << b << endl;
		//cout << McxiTen(a) << ", " << McxiTen(b) << endl;
		
		int sum = McxiTen(a) + McxiTen(b);
		//cout << sum << endl;
		TenMcxi(sum, c);
		cout << c << endl;
	}
	
	
	return 0;
}