#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool SortXPos(pair<int, int> pos1, pair<int, int> pos2) { return pos1.first < pos2.first ? true : false; }
bool SortYPos(pair<int, int> pos1, pair<int, int> pos2) { return pos1.second < pos2.second ? true : false; }

int main(void)
{
	int num;
	while(cin>>num)
	{
		if(num == 0)
			break;
		vector<pair<int, int> > pos(num);
		pos[0].first= 0; pos[0].second= 0;

		for(int i= 1 ; i < num; i++)
		{
			int base, action;
			cin>>base>>action;

			switch(action)
			{
			case 0:
				pos[i].first= pos[base].first-1;
				pos[i].second= pos[base].second;
				break;
			case 1:
				pos[i].first= pos[base].first;
				pos[i].second= pos[base].second-1;
				break;
			case 2:
				pos[i].first= pos[base].first+1;
				pos[i].second= pos[base].second;
				break;
			case 3:
				pos[i].first= pos[base].first;
				pos[i].second= pos[base].second+1;
				break;
			}
		}

		sort(pos.begin(), pos.end(), SortXPos);
		int xlength= pos[num-1].first-pos[0].first+1;
		sort(pos.begin(), pos.end(), SortYPos);
		int ylength= pos[num-1].second-pos[0].second+1;

		cout<<xlength<<' '<<ylength<<endl;
	}
	return 0;
}