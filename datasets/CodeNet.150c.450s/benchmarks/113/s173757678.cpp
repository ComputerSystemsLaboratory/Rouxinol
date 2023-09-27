#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	vector<int> v;
	int temp;
	while (1)
	{
		cin >> temp;
		if (temp == 0)break;
		v.push_back(temp);
	}
	temp = 1;
	for (int i : v)
	{
		
		cout << "Case " << temp << ": " << i << endl;
		temp++;
	}
}
