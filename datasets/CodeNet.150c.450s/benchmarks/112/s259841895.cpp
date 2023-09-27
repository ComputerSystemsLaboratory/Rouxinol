#include <iostream>
using namespace std;

int main() {
	int n, m;
	char *conv_from, *conv_to;
		
	while(cin >> n, n){
		conv_from = new char [n];
		conv_to = new char [n];
		for(int i=0; i<n; i++){
			cin >> conv_from[i] >> conv_to[i];
		}
		cin >> m;
		for(; m; m--){
			char c;
			cin >> c;
			for(int i=0; i<n; i++){
				if(c == conv_from[i]){
					c = conv_to[i];
					break;
				}
			}
			cout << c;
		}
		cout << endl;
	}
		
	return 0;
}