#include<iostream>
#include<vector>
#include<algorithm>

int main(void)
{
	std::vector<int> data;

	int n;

	while(std::cin >> n)
	{
		data.push_back(n);
	}

	std::vector<int> count(data.size());

	for(size_t i=0; i<data.size(); ++i)
	{
			for(size_t j=0; j<data.size()-i; ++j)
		{
			if(data[i]==data[i+j])
			{
				++count[i];
			}
		}

	}

	count.push_back(0);//ここまででdataのサイズとcountのサイズは同じはずだが、count[i]とcount[i+1]の比較があるのでcountのサイズを一つ大きくしておく Max(count)!=0のはずなので0を入れておけば結果に問題はない

	int countmax = *std::max_element(count.begin(),count.end());

	std::vector<int> answer;
	
	for( size_t i=0; i<count.size(); ++i )
	{
		if(count[i]==countmax)
		{
			answer.push_back(data[i]);
		}
	}
	
	std::sort(answer.begin(),answer.end());

	for( size_t i=0; i<answer.size(); ++i)
	{
		std::cout << answer[i] << '\n';
	}
}