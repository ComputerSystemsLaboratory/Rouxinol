#include<iostream>
#include<string>
using namespace std;
int main(){
	string str, ord, p,ans;
	int m, a, b,y;
	cin >> str >> m;
	for (int i = 0; i < m; i++){
		cin >> ord;
		if (ord == "replace"){
			cin >> a >> b >> p;
			for (int k = 0; k < b - a + 1; k++){
				str[a + k] = p[k];
			}
		}
		if (ord == "reverse"){
			cin >> a >> b;
			for (int j = a; j < b ; j++){
				y = b;
				
				ans[j] = str[j];
				str[j] = str[y];
				str[y] = ans[j];
				b--;
			}
		}
		if (ord == "print"){
			cin >> a >> b;
			cout << str.substr(a,b-a+1) << endl;
		}
	}
	return 0;
}