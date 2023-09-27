#include <iostream>
#include <algorithm>

using namespace std;

void Solution()
{
	int N;
	int a[100] = {0};
	int count = 0;

	cin>>N;

	for (int i = 0; i < N; i++)
	{
		cin>>a[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 1; j < N - i; j++) // leave out the last digit
		{
			if (a[j - 1] > a[j])
			{
				swap(a[j - 1], a[j]);
				count++;
			}
		}
	}

	for(int i  = 0; i < N - 1; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[N - 1]<<endl;
    cout<<count<<endl;


}

int main()
{
	Solution();
	return 0;
}