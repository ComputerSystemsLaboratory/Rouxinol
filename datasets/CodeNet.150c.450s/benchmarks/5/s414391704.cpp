#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int nums[size];
	for (int i=1; i<=size; i++)
	{
		cin >> nums[size-i];
	}
	for (int i=0; i<size-1; i++)
	{
		cout << nums[i] << ' ';
	}
	cout << nums[size-1] << endl;
	return 0;
}