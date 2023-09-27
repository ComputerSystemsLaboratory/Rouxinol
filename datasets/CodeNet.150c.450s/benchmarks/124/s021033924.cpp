#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

#define go first
#define ct second

int cost[100 + 10] , cost_ps[100 + 10];
int n,vf,k,v,c;

int v_k[100];

vector< pair<int, int> > went[100];

pair<int, int> p_tmp;

int  check_go(int st)
{
	int i;
	int ret=0;

	for (i = 0; i < v_k[st]; i++)
	{
		if (cost_ps[went[st][i].go] > cost[st] + went[st][i].ct || cost_ps[went[st][i].go] == -1)
		{
			cost_ps[went[st][i].go] = cost[st] + went[st][i].ct;
		}
	}

	for (i = 1; i < n; i++)
	{
		//cout << "Z" << i << endl;
		if ( (cost_ps[ret] > cost_ps[i] && cost[i]==-1 || cost[ret] != -1 ) && cost_ps[i]!=-1 )
		{
			//cout << "B" << cost[ret] << endl;
			ret = i;
			//printf("ret=%d\n", ret);
		}
	}
	//cout << cost_ps[ret] << endl;

	cost[ret] = cost_ps[ret];
	//cout << "A" << cost[ret] << endl;

	return ret;

}

int main()
{
	int i,j;
	int st_num=0;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cost[i] = cost_ps[i] = -1;

		cin >> vf ;
		cin >> v_k[vf];
		for (j = 0; j < v_k[vf] ; j++)
		{
			cin >> p_tmp.go >> p_tmp.ct;

			went[vf].push_back(p_tmp);
		}
	}

	cost[0] = cost_ps[0] = 0;

	for (i = 1; i < n; i++)
	{
		st_num = check_go(st_num);
	}

	for (i = 0; i < n; i++)
	{
		cout << i << " " << cost_ps[i] << endl;
	}

	return 0;
}
