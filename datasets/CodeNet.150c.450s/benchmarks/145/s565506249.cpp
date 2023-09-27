#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string in,large="";
	map<string,int> cnt;
	getline(cin,in);
	string tmp="";
	for(int i=0;i<in.size();i++)
	{
		if(in[i]==' '||i==in.size()-1)
		{
			if(i==in.size()-1&&in[i]!=' ') tmp+=in[i];
			large=large.size()<tmp.size()?tmp:large;
			cnt[tmp]++;
			tmp="";
		}
		else
		{
			tmp+=in[i];
		}
	}
	map<string,int>::iterator it=cnt.begin();
	string ans; int num=0;
	while(it!=cnt.end())
	{
		//cout<<(*it).first<<" "<<(*it).second<<endl;
		if((*it).second>num)
		{
			ans=(*it).first;
			num=(*it).second;
		}
		it++;
	}
	cout<<ans<<" "<<large<<endl;
	return 0;
}