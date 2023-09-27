#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, m;
	char a, b;
	map<char, char> ma;

	while(cin >> n, n){
		ma.clear();
		for(int i=0; i < n; i++){
			cin >> a >> b;
			ma[a] = b;
		}

		cin >> m;
		for(int i=0; i < m; i++){
			cin >> a;
			if(ma[a] != '\0') cout << ma[a];
			else cout << a;
		}
		cout << endl;
	}
}