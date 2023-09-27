#include <iostream>

using namespace std;

int main(void)
{
	int cost;
	int ret;
	int count;
	
	while (1){
		cin >> cost;
		if (cost == 0)break;
		ret = 1000 - cost;
		
		count = 0;
		count += ret / 500;
		ret %= 500;
		count += ret / 100;
		ret %= 100;
		count += ret / 50;
		ret %= 50;
		count += ret / 10;
		ret %= 10;
		count += ret / 5;
		ret %= 5;
		count += ret;
		
		cout << count << endl;
	}
	
	return (0);
}