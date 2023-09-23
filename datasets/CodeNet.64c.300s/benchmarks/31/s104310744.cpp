#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int tmp, num[35];
	memset(num, -1, sizeof(num));
	for (int i = 0; i < 28;i++){
		cin >> tmp;
		num[tmp] =	1;
	}
	for (int i = 1; i < 31; i++){
		if (num[i] == -1)
			cout << i << endl;
	}
}