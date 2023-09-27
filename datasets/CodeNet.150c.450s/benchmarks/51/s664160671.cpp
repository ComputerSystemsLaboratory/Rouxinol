#include<iostream>
using namespace std;

int main(void){
	int a[31] = {0};
	int tmp;
	for(int i = 0; i < 28; i++){
		cin >> tmp;
		a[tmp] = 1;
	}
	for(int i = 1; i < 31; i++)
		if(a[i] == 0)
			cout << i << endl;
	return 0;
}