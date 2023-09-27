#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> array, num(101, 0), out;
	int inp, MAX = 0;
	int flag = 0;
	
	while (cin>>inp)
	{
		array.push_back(inp);
	}
	for (int i = 0; i < array.size(); i++)
	{
		int cnt = 0;
		for (int j = i; j < array.size(); j++)
		{
			if (array[i] == array[j])num[i]++;
		}
	}

	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array.size(); j++)
		{
			if (num[i] < num[j]) {
				flag = 1;
				break;
			}
		}
		if (flag != 1) out.push_back(array[i]);		
		flag = 0;
	}
	sort(out.begin(), out.end());
	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i] << endl;
	}
	return 0;
}