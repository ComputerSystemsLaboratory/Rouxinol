#include <iostream>
#include <stack>
#include <utility>

using namespace std;

void Output(stack<pair<int,int> > lake)
{
	stack<pair<int,int> > res_lake;
	int lake_sum = 0;
	int n = lake.size();
	for(int i=0; i<n; i++){
		lake_sum += lake.top().first;
		res_lake.push(lake.top());
		lake.pop();
	}
	
	cout << lake_sum << endl; 
	cout << n;
	for(int i=0; i<n; i++){
		cout << " "<< res_lake.top().first;
		res_lake.pop();
	}
	cout << endl;
	return;
}

void MakeLake(char input,int i,stack<pair<int,int> > &lake,stack<int> &downlink)
{
	if(input == '\\'){
		downlink.push(i);
	}else if(input == '/'){
		if(downlink.empty())return;
		int lake_size = i - downlink.top();
		while(lake.empty() == false && lake.top().second > downlink.top()){
			lake_size += lake.top().first;
			lake.pop();
		}
		lake.push(make_pair(lake_size,downlink.top()));
		downlink.pop();
	}
	return;
}

int main()
{
	stack<int> downlink;
	
	int i = 0;
	char input;
	stack<pair<int,int> > lake;
	while(1){
		i++;
		cin >> input;
		if(!cin)break;
		MakeLake(input,i,lake,downlink);
	}
	Output(lake);
}