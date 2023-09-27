#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int i, t;
	do{
		cin >> s;
		if ((int)s[0]-48 == 0)
			break;
		i = 0, t = 0;
		while (s[i])
		{
			t += ((int)s[i] - 48);
			i++;
		}
		cout << t << endl;
	} while (1);
	return 0;
}