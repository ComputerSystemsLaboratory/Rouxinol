#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	char t[100], a[100];
	
	while (cin >> n, n){
		for (int i = 0; i < n; i++){
			cin >> t[i] >> a[i];
		}
		int m;
		string s;
		cin >> m;
		for (int i = 0; i < m; i++){
			char c;
			
			cin >> c;
			
			for (int j = 0; j < n; j++){
				if (c == t[j]){
					c = a[j];
					break;
				}
			}
			
			s += c;
		}
		
		cout << s << endl;
	}
	
	return (0);
}