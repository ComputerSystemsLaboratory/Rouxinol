
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1193&lang=jp

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

int H;
vector<vector<int>> field;

int erase(int cnt, int h, int st, int ed)
{
	int res=0;
	if(cnt>=3){
		for( int i=st; i<=ed; ++i ){
			res += field[h][i];
			field[h][i] = 0;
		}
	}

	return res;
}

int chain()
{
	int res=0;
	int prev=0,cnt=0,st=0;
	rep(h,H){
		rep(w,5){
			if( w>0 && prev==field[h][w] && field[h][w] ){ 
				cnt++;
				if(w==4){ res += erase(cnt,h,st,w); }
			}else{
				res += erase(cnt,h,st,w-1);
				st=w; 
				cnt=1;
				prev=field[h][w];
			}
		}
	}
	return res;
}

void fall()
{
	int cnt=0;
	while(true)
	{
		for( int h=H-1; h>0; --h ){
			for( int w=5-1; w>=0; --w){
				if(field[h][w]==0 && field[h-1][w]){
					swap(field[h][w],field[h-1][w]);
					cnt++;
				}
			}
		}
		if(cnt==0) break;
		cnt=0;
	}
	return;
}

int main()
{
	while( cin>>H && H )
	{
		field.assign( H, vector<int>(5,0) );
		rep(h,H){
			rep(w,5){
				cin >> field[h][w];
			}
		}
		
		int score=0,ans=0;
		while(true)
		{
			score = chain();
			if(score==0){ break; }
			ans += score;
			fall();
		}
		cout << ans << endl;
	}
	return 0;
}