#include<iostream>
#include<queue>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define PII pair<int,int>
#define MP make_pair

int ctoi(char c)
{
	if ('0' <= c&&c <= '9')return (c - '0');
	else return -1;
}

char MAP[1000][1000];
char tMAP[1000][1000];
PII D[9];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
	int H, W, N;
	PII S;
	cin >> H >> W >> N;
	REP(i, H)REP(j, W)
	{
		char temp;
		cin >> temp;
		if (temp == 'S')
		{
			MAP[i][j] = '.';
			S = MP(j, i);
		}
		else if (temp == '.' || temp == 'X')MAP[i][j] = temp;
		else
		{
			int t = ctoi(temp);
			MAP[i][j] = '.';
			D[t - 1] = MP(j, i);
		}
	}
	int sum = 0;
	int index = 0;
	while (1)
	{
		REP(i, H)REP(j, W)tMAP[i][j] = MAP[i][j];
		if (S == D[N - 1])break;
		int timer = 0;
		queue <PII> q;
		queue <int> t;
		q.push(S);
		t.push(timer);
		while (1)
		{
			if (t.front() > timer)timer++;
			if (q.front() == D[index])
			{
				sum += timer;
				S = D[index];
				index++;
				break;
			}
			for (int i = 0; i < 4; i++)
			{
				int tx = q.front().first + dx[i];
				int ty = q.front().second + dy[i];
				if (0 <= tx&&tx <= W - 1 && 0 <= ty&&ty <= H - 1)
				{
					if (tMAP[ty][tx] == '.')
					{
						tMAP[ty][tx] = 'X';
						q.push(MP(tx, ty));
						t.push(timer + 1);
					}
				}
			}
			q.pop();
			t.pop();
		}
	}
	cout << sum << endl;
	return 0;
}