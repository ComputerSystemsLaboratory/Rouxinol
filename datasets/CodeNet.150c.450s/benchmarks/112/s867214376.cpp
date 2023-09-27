#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int Fnum, Snum;
	vector<char> before, after, sent;
	char wk, tk;

	while(cin >> Fnum)
	{
		if(!Fnum) break;

		for(int i = 0; i < Fnum; i++)
		{
			cin >> wk >> tk;
			before.push_back(wk); after.push_back(tk);
		}

		cin >> Snum;

		for(int i = 0; i < Snum; i++)
		{
			cin >> wk;
			sent.push_back(wk);
		}

		for(int i = 0; i < Snum; i++)
		{
			bool ju = true;
			for(int j = 0; j < Fnum; j++)
			{
				if(sent[i] == before[j])
				{
					cout << after[j];
					ju = false;
					break;
				}
			}
			if(ju)
			{
				cout << sent[i];
			}
		}
		cout << endl;
		before.clear(); after.clear(); sent.clear();
	}
}