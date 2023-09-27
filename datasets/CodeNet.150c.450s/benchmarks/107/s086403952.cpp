#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX (1001)

int main() {

	//二次元行列の作成
	static int array[MAX +2][MAX + 2];
	for (int i = 0; i <= MAX + 1;i++) {
		array[0][i] = i;
		array[i][0] = i;
	}

	char str1[MAX];
	char str2[MAX];
	cin >> str1 >> str2;

	int Len1 = strlen(str1);
	int Len2 = strlen(str2);

	for (int i = 1; i <= Len1; i++) {
		for (int j = 1; j <= Len2; j++) {

			int avove = array[i - 1][j]+1;
			int yoko = array[i][j - 1]+1;
			int nanameue = str1[i-1] == str2[j-1] ? array[i - 1][j-1]+0 : array[i - 1][j - 1] + 1;
		
			array[i][j] = min({ avove ,yoko,nanameue });

		}
	}

	cout << array[Len1][Len2]<<"\n";
	return 0;
}
