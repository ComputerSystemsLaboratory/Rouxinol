#include<map>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int i;
	map<int,int> mp;
	while(cin>>i){
		if(!mp.count(i))	mp.insert(make_pair(i,0));
		else				mp.find(i)->second++;
	}

	int vmax=-1e9;
	map<int,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++)vmax=max(vmax,it->second);
	for(it=mp.begin();it!=mp.end();it++)if(it->second==vmax)printf("%d\n",it->first);

	return 0;
}