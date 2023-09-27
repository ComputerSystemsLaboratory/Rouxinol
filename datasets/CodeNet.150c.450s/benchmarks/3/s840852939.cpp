#include <iostream>
#include <string>

using namespace std;

int main(){
	string str, d;
	int a, b, n;
	cin >> str >> n;
	
	for(int i = 0; i < n; i++){
		cin >> d >> a >> b;
		string p;
		if(d == "print"){
			for(int j = a; j <= b; j++){
				cout << str[j];
			}
			cout << endl;
		}
		else if(d == "reverse"){
			p = str;
			for(int j = 0; j <= b - a; j++){
				str[a + j] = p[b - j];
			}
		}
		else if(d == "replace"){
			cin >> p;
			for(int j = 0; j <= b - a; j++){
				str[a + j] = p[j];
			}
		}
	}
	
	return 0;
}