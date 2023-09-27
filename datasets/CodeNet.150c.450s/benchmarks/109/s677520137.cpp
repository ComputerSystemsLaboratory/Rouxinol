#include<bits/stdc++.h>
using namespace std;

int main()
{
	while (true)
	{
		int n;cin >> n;
		if (n==0) break;
		vector<int> time(86500,0);
		string start,stop;
		for (int i=0;i<n;i++)
		{
			cin >> start >> stop;
			int time1=((start[0]-'0')*10+(start[1]-'0'))*3600+((start[3]-'0')*10+(start[4]-'0'))*60+((start[6]-'0')*10+start[7]-'0');
			int time2=((stop[0]-'0')*10+(stop[1]-'0'))*3600+((stop[3]-'0')*10+(stop[4]-'0'))*60+((stop[6]-'0')*10+stop[7]-'0');
			time[time1]++;
			time[time2]--;
		}
		for (int i=0;i<86499;i++)
		{
			time[i+1]+=time[i];
		}
		int ans=0;
		for (int i=0;i<86500;i++) ans=max(ans,time[i]);
		cout << ans << endl;
	}
	return 0;
}
