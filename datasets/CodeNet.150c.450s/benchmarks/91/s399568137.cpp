#include <iostream>
#include<vector>
using namespace std;
vector<int> p;
void makeprimelist(int n)
{
	bool *isp=new bool[++n];
	for(int i=0;i<n;i++)isp[i]=true;
	for(int i=2;i<=n;i++)
	{
		if(isp[i])
		{
			p.push_back(i);
			for(int j=2;j<=n/i;j++)isp[i*j]=false;
		}
	}
	return;
}

int main() {
	int n;
	while(cin>>n)
	{
		p.clear();
		makeprimelist(n);
		cout<<p.size()<<endl;
	}
	return 0;
}