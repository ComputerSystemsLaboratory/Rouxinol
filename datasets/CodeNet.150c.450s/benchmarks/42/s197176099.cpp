#include <string>
#include <queue>
#include <iostream>
using namespace std;
struct process
{
	string name;
	int t;
};
int main() 
{
	int n,q;
	int time=0;
	queue<process> rrs;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		process temp;
		cin>>temp.name>>temp.t;
		rrs.push(temp);
	}

	while(!rrs.empty())
	{

		process temp;
		temp=rrs.front();
		rrs.pop();
		if(temp.t>q)
		{
			temp.t=temp.t-q;
			rrs.push(temp);
			time+=q;
		}
		else
		{
			time+=temp.t;
			cout<<temp.name<<" "<<time<<endl;
		}
	}
}