#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void print(const char str[]);
void reverse(char str[]);
void replace(char str[]);
int main(void)
{	
	char str[1001] = "\0";
	cin >> str;
	int q;
	cin >> q;
	
	for (int i = 0; i < q; i++) {
		char order[8] = "\0";
		cin >> order;
		
		if (strcmp(order, "print") == 0) print(str);
		else if (strcmp(order, "reverse") == 0) reverse(str);
		else replace(str);
	}
	
	return 0;
}

void print(const char str[])
{
	int a, b;
	cin >> a >> b;
	
	for (int i = a; i <= b; i++) {
		cout << str[i];
	}
	cout << endl;
}

void reverse(char str[])
{
	int a, b;
	cin >> a >> b;
	
	int n = (b - a + 1) / 2;
	for (int i = 0; i < n; i++) {
		char temp;
		temp = str[a+i];
		str[a+i] = str[b-i];
		str[b-i] = temp;
	}
}

void replace(char str[])
{
	int a, b;
	char p[1001];
	cin >> a >> b >> p;
	
	strncpy(&str[a], p, (b - a + 1));
}