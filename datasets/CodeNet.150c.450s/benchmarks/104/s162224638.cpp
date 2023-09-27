#include <iostream>
#include <algorithm>
#define MAX 30
using namespace std;

int main()
{
	int w,n;
	int a,b;
	int number[MAX];
	char c;
	
	cin >> w;
	cin >> n;
	
	for(int i = 1; i <= w; i++){
		number[i] = i;
//		cout << number[i] << endl;
	}
	
	for(int i = 0; i < n; i++){
		cin >> a>> c >> b;
		swap(number[a], number[b]);
	}
	
	for(int i = 1; i <= w; i++){
		cout << number[i] << endl;
	}

	return 0;
}