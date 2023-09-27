#include<iostream>

using namespace std;

int main()
{
	int num, cnt;

	while(cin >> num)
	{
		if(!num) break;
		num = 1000 - num;
		cnt = 0;
		
		while(num)
		{
			if(num >= 500) num -= 500;
			else if(num >= 100) num -= 100;
			else if(num >= 50) num -= 50;
			else if(num >= 10) num -= 10;
			else if(num >= 5) num -= 5;
			else if(num >= 1) num -= 1;
			cnt++;
		}
		cout << cnt << endl;
	}
}