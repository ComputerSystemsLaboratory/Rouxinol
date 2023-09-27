#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a = 0, b = 0, count = 0, d[1000] = { 0 };
	string c;
	while (1){
		cin >> a >> c >> b;
		if (c == "?") break;
		else if (c == "+") d[count] = a + b, count++;
		else if (c == "-") d[count] = a - b, count++;
		else if (c == "*") d[count] = a * b, count++;
		else               d[count] = a / b, count++;
	}
	for (int i = 0; i < count; i++) cout << d[i] << endl;
	return 0;
}