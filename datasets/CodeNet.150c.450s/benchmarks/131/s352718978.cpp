#include <bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s="",a="",a_min="",a_max="";
		int L=0,out_i=0,out_j=0,x=0,out_a=0;
		vector<int> suuretu;
		bool ok=false;

		cin >> s >> L;
		suuretu.push_back(stoi(s));
		if(s=="0"&&L==0) break;
		for(int k=0;k<=20;k++)
		{	a="";
			for(int i=0;i<L-s.size();i++)
			{
				a+="0";
			}
			a+=s;//a=083268
			//cout << a << endl;
			//suuretu.push_back(a);
			a_min=a;
			sort(a_min.begin(),a_min.end());
			a_max=a;
			sort(a_max.begin(),a_max.end(),greater<char>());
			x=stoi(a_max)-stoi(a_min);
			//cout << x << endl;
			//cout << a_max << " " << a_min << endl;
			s=to_string(x);
			suuretu.push_back(x);
		}

		for(int j=0;j<21;j++)
		{
			for(int i=j+1;i<21;i++)
			{
				if(suuretu[j]==suuretu[i]&&i!=j)
				{
					out_i=i;
					out_j=j;
					out_a=suuretu[j];
					ok=true;
					break;
				}
			}
			if(ok) break;
		}
		cout << out_j << " " << out_a << " " << out_i-out_j << endl;
	}
}