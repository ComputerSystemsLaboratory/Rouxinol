#include<iostream>
#include <vector>
using namespace std;

#define MAX 100

int main()
{
	vector<int> data(MAX);
	int a, max, i;

	max = 0;
	while (cin>>a)
		if (++data[a-1] > max) max = data[a-1];

	for (i = 0; i < MAX; i++)
		if (data[i] == max) cout<<(i+1)<<endl;

	return 0;
}