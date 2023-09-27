#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	char str[1001];

	while (true){
		cin >> str;

		if (str[0] == '0')
			break;

		int sum = 0;

		for (int i = 0; i < strlen(str); i++){
			sum += (str[i] - '0');
		}
		printf("%d\n", sum);
	}
	return 0;
}