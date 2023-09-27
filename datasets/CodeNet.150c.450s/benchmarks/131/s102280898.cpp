#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int p(int in)
{
	int ret = 1;
	for (int i = 0; i < in; ++i)
		ret *= 10;
	return ret;
}

int to10(vector<int>& in)
{
	int ret = 0;
	for (int i = 0; i < in.size(); ++i)
	{
		ret *= 10;
		ret += in.at(i);
	}

	return ret;
}

vector<int> toVec(int input, int L)
{
	vector<int> in;
	for (int i = 1; i <= L; ++i){
		in.push_back((input % p(i)) / p(i - 1));
	}

	reverse(in.begin(), in.end());

	return in;
}

int getLarge(vector<int> in)
{
	int ret = 0;
	while (!in.empty()){
		ret *= 10;
		auto it = max_element(in.begin(), in.end());
		ret += *it;
		in.erase(it);
	}
	return ret;
}

int getSmall(vector<int> in)
{
	int ret=0;
	while (!in.empty()){
		ret *= 10;
		auto it = min_element(in.begin(), in.end());
		ret += *it;
		in.erase(it);
	}
	return ret;
}

int main()
{
	while (1)
	{
		int input, L;
		cin >> input >> L;
		if (input == 0 && L == 0)
			break;

		vector<int> in;

		vector<int> ret = {input};
		int tmp;
		auto it = ret.begin();

		while (1)
		{
			in = toVec(input, L);
			tmp = getLarge(in) - getSmall(in);
			ret.push_back(tmp);
			if ((it = find(ret.begin(), ret.end(), tmp)) != (ret.end()-1))
			{
				cout << it - ret.begin() << " " << tmp <<" "<< (ret.end() - it) - 1 << endl;
				break;
			}
			input = tmp;
		}
		
	} 

	return 0;
}