#include<iostream>

using namespace std;

const int r[6][6] = {
	{-1, 2, 4, 1, 3,-1},
	{ 3,-1, 0, 5,-1, 2},
	{ 1, 5,-1,-1, 0, 4},
	{ 4, 0,-1,-1, 5, 1},
	{ 2,-1, 5, 0,-1, 3},
	{-1, 3, 1, 4, 2,-1}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int d[6];
	cin>>d[0]>>d[1]>>d[2]>>d[3]>>d[4]>>d[5];
	int n, t, f;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>t>>f;
		for(int j=0; j<6; j++) {
			if(t==d[j]) {
				t=j;
				break;
			}
		}
		for(int j=0; j<6; j++) {
			if(f==d[j]) {
				f=j;
				break;
			}
		}
		cout<<d[r[t][f]]<<'\n';
	}
	return 0;
}

