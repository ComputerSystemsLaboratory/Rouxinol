#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;			// string型を使用する場合、scanf関数は使用できない？？
	string order, p, c;
	int q, a, b;
	int i, j;

	cin >> str;
	cin >> q;

	for(i=0;i<q;i++){
		cin >> order >> a >> b;

		if(order == "print"){
			for(j=a;j<=b;j++)
				cout << str[j];
			cout << endl;
		}
		else if(order == "reverse"){
			c =  str;
			for(j=a;j<=b;j++)
				str[j] = c[b+a-j];
		}
		else if(order == "replace"){
			cin >> p;
			for(j=a;j<=b;j++)
				str[j] = p[j-a];
		}
	}

	return 0;
}