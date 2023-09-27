#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 0;
	cin >> n;
	int min;
	cin >> min;
	int maxp = -2147483647;
	for(int i = 0 ; i < n -1 ; i ++){
		int x = 0;
		cin >> x;
		if(maxp < x - min) maxp = x - min; 
		if(x < min) min = x;
	}
	cout << maxp << endl;
	return 0;
}