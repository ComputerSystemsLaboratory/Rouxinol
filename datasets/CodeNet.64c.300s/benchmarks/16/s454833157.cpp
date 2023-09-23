#include<iostream>

using namespace std;

int min(int x, int y);
int max(int x, int y);

int main(void)
{
	int n, rt, __min, maxans;
	cin >> n;
	cin >> __min;
	maxans = -2000000000;
	for(int i = 0; i < n - 1; i++){
		cin >> rt;
		maxans = max(maxans, rt-__min);
		__min = min(__min, rt);
	}
	cout << maxans << endl;
	return 0;
}

int min(int x, int y){
	int tmp;
	if(x > y){
		tmp = x;
		x = y;
		y = tmp;
	}
	return x;
}

int max(int x, int y){
	int tmp;
	if(x < y){
		tmp = x;
		x = y;
		y = tmp;
	}
	return x;
}