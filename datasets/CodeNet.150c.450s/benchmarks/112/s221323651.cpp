#include <iostream>
#include <map>

using namespace std;

int main(void){
	int n;
	while(cin >> n && n){
		char x,y;
		map<char,char> m;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			m[x] = y;
		}
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x;
			if(m.find(x) == m.end()){
				cout << x;
			}else{
				cout << m[x];
			}
		}
		cout << endl;
	}
}