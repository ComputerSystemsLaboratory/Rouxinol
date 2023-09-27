#include <algorithm>
#include <functional>
#include <cstdio>
#include <vector>
using namespace std;

int main(void)
{
	int num;
	vector<int> nums;
	for(int f1 = 0; f1 < 5; f1++)
	{
		scanf("%d", &num);
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end(), greater<int>());
	vector<int>::iterator t = nums.begin();
	for(int f1 = 0; f1 < 5; f1++)
	{	
		if(f1 + 1 < 5)
		{
			printf("%d ",*(t + f1));
		}
		else
		{
			printf("%d\n",*(t + f1));
		}
	}
	return 0;
}