#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int main() 
{
	int N, n, d;
	while(cin >> N && N)
	{
		vector<int> x(N,0);
		vector<int> y(N,0);

		int dx[4] = {-1, 0, 1, 0};
		int dy[4] = {0, -1, 0, 1};
		
		REP(i,1,N)
		{
			cin >> n >> d;	
			x[i] = x[n] + dx[d];
			y[i] = y[n] + dy[d];
			
		}

		int width=0, height=0;

		width = *max_element(ALL(x)) - *min_element(ALL(x)) + 1;
		height = *max_element(ALL(y)) - *min_element(ALL(y)) + 1;

		cout << width << " " << height << endl;
	}
	return 0;
}