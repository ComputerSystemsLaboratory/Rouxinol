#include<iostream>
#include<string>

using namespace std;

int main(){
	/*
	int n;
	cin >> n;
	int p[200][3];

	for(int i=0;i<n;i++)
	{
		cin >> p[i][0] >> p[i][1] >> p[i][2];
	}

	int _p;
	for(int k=0;k<3;k++)
	{
		for(int i=0;i<n;i++)
		{
			_p = p[i][k];
			for(int j=i+1;j<n;j++)
			{
				if(_p == p[j][k])
				{
					p[i][k] = 0;
					p[j][k] = 0;
				}
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		cout << p[i][0] + p[i][1] + p[i][2] << endl;
	}
	*/

	int ai,am,as,ae,bi,bm,bs,be;
	cin >> ai >> am >> as >> ae >> bi >> bm >> bs >> be;
	int answer=ai+am+as+ae;
	if(answer < bi+bm+bs+be)
	{
		answer=bi+bm+bs+be;
	}
	cout << answer << endl;

	return 0;
}
