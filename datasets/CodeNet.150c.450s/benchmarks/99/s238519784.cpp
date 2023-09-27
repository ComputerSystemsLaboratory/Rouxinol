#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>

using namespace std;

void input(int a[]);

void sum(int a[], int b[]);

int main()
{
	int n, a[4]={0}, b[4] = {0};
	cin >> n;
	for(int i = 0; i < n; i++){
		input(a);
		input(b);
		sum(a, b);
	}
	return 0;
}

void input(int a[])
{
	string str;
	cin >> str;
	for(int j = 0; j < 4; j++){
			a[j] = 0;
		}
	for(int i = 0; i < str.length(); i++){
		if(isdigit(str[i])){
			if(str[i+1] == 'm') a[0] = str[i]-'0';
			else if(str[i+1] == 'c') a[1] = str[i]-'0';
			else if(str[i+1] == 'x') a[2] = str[i]-'0';
			else if(str[i+1] == 'i') a[3] = str[i]-'0'; 
			i++;
		} else {
			if(str[i] == 'm') a[0] = 1;
			else if(str[i] == 'c') a[1] = 1;
			else if(str[i] == 'x') a[2] = 1;
			else if(str[i] == 'i') a[3] = 1;
		}
	}
	return;
}

void sum(int a[], int b[])
{
	char MCXI[5] = {"mcxi"};
	int ans_keisu[4]={0};
	for(int i = 3; i >= 0; i--){
		ans_keisu[i] = a[i] + b[i];
		if(ans_keisu[i] > 9){
			a[i-1] += ans_keisu[i] / 10;
			ans_keisu[i] = ans_keisu[i] % 10;
		}
	}
	for(int i = 0; i < 4; i++){
		if(ans_keisu[i] == 0) continue;
		else if(ans_keisu[i] == 1){
			cout << MCXI[i];
		} else {
			cout << ans_keisu[i] << MCXI[i];
		}
	}
	cout << endl;
	return;
}