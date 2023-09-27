
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2000

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int field[21][21];
int now_x, now_y;
int jewel;

void init()
{
		jewel=0;
		fill((int*)field, (int*)(field+21), 0); 
		now_x=10; now_y=10;
}

void move(string d, int l)
{
	rep(i,l)
	{

		if(d == "N"){
			now_y += 1;
		}
		else if(d == "E"){
			now_x += 1;
		}
		else if(d == "S"){
			now_y -= 1;
		}
		else if(d == "W"){
			now_x -= 1;
		}

		if(field[now_y][now_x] == 1)
		{
			field[now_y][now_x] = 0;
			jewel+=1;
		}
	}
}

int main() 
{
	int N;
	
	while(cin >> N && N)
	{
		init();

		int X,Y;
		rep(i,N)
		{
			cin >> X >> Y;
			field[Y][X] = 1;	
		}

		int M;
		string D; int L;

		cin >> M;
		rep(i,M)
		{
			cin >> D >> L;
			move(D,L);
		}

		if(jewel == N){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}