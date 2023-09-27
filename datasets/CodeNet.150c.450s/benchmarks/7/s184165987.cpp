#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>

using namespace std;

int main(void)
{
	int array[10];
	for(int i = 0; i < 10; i++){
		cin >> array[i];
	}
	
	sort(array, array+10, greater<int>());
	
	for(int j = 0; j < 3; j++){
		cout << array[j] << endl;
	}
	
	return 0;
}