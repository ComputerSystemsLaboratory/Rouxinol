// 2014/07/29 Tazoe

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int q;
	cin >> q;

	for(int i=0; i<q; i++){
		string s;
		cin >> s;

		if(s=="print"){
			int a, b;
			cin >> a >> b;

			for(int j=a; j<=b; j++){
				cout << str[j];
			}
			cout << endl;
		}
		else if(s=="reverse"){
			int a, b;
			cin >> a >> b;

			for(int j=a, k=b; j<k; j++, k--){
				swap(str[j], str[k]);
			}
		}
		else if(s=="replace"){
			int a, b;
			cin >> a >> b;
			string p;
			cin >> p;

			for(int j=a, k=0; j<=b; j++, k++){
				str[j] = p[k];
			}
		}
	}

	return 0;
}