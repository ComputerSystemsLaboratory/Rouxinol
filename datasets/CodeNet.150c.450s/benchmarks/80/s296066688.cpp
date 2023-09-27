#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int sum=0, summ=0;
	for (int i = 0; i < 4; i++)
	{
		int s; cin >> s; sum += s;
	}
	for (size_t i = 0; i < 4; i++)
	{
		int s; cin >> s; summ += s;
	}
	if (sum >= summ) { cout << sum<<endl; }
	else { cout << summ<<endl; }
}