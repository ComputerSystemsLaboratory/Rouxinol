#include<iostream>
#include<vector>
#include<algorithm>

void listen_hills(std::vector<int> &hills);
void echo_top3(const std::vector<int> &hills);

int main()
{
	using namespace std;
	
	vector<int> hills;
	listen_hills(hills);
	sort(hills.begin(),hills.end(),greater<int>());
	echo_top3(hills);
	
	return 0;
}

void listen_hills(std::vector<int> &hills)
{
	using namespace std;
	int tmp;
	for(int hillCount=0;hillCount<10;hillCount++)
	{
		cin>>tmp;
		hills.push_back(tmp);
	}
}

void echo_top3(const std::vector<int> &hills)
{
	using namespace std;
	vector<int>::const_iterator itr=hills.begin();
	for(int count=0;count<3;count++)
	{
		cout<<*itr++<<endl;
	}
}