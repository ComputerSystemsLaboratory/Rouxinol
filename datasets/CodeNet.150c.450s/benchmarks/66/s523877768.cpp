#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
#include<set>

using namespace std;

int main()
{
		int n;
		cin >> n;
		vector<string> u(n);
		for(int i=0;i<n;i++)
			cin >> u[i];
		int m;
		cin >> m;
		bool open=false;
		for(int i=0;i<m;i++)
		{
			string t;
			cin >> t;
			bool flag=false;
			for(int j=0;j<u.size();j++)
			{
				if(t==u[j])
					flag=true;
			}
			if(flag)
			{
				if(open)
					cout << "Closed by " << t << endl;
				else
					cout << "Opened by " << t << endl;
				open=(!open);
			}
			else
			{
				cout << "Unknown " << t << endl;
			}

		}





}
