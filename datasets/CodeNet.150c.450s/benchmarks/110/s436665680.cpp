#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;
int xs[10],ys[10];
int H,W,N;
string S[1002];
int main()
{
	scanf("%d%d%d",&H,&W,&N);
	for(int i=0;i<W+2;i++){
		S[0]+='X';
		S[H+1]+='X';
	}
	for(int i=1;i<=H;i++){
		string x;
		cin >> x;
		S[i]+='X'+x+'X';
	}
	for(int i=1;i<=H;i++){
		for(int j=1;j<=W;j++){
			if(S[i][j]!='X'&&S[i][j]!='.'){
				if(S[i][j]=='S'){
					xs[0]=j;
					ys[0]=i;
				}
				else{
					xs[S[i][j]-'0']=j;
					ys[S[i][j]-'0']=i;
				}
			}
		}
	}
	int XX[1002][1002];
	bool FF[1002][1002];
	int ans=0;
	vector<pair<int,int> >vec1;
	vector<pair<int,int> >vec2;
	int dx[4]={-1,0,0,1};
	int dy[4]={0,-1,1,0};
	for(int x=0;x<N;x++){
		vec1.clear();
		vec2.clear();
		for(int i=0;i<H+2;i++)for(int j=0;j<W+2;j++){
			XX[i][j]=-1;
			FF[i][j]=false;
		}
		int cou=0;
		XX[ys[x]][xs[x]]=cou;
		FF[ys[x]][xs[x]]=true;
		vec1.push_back(make_pair(ys[x],xs[x]));
		while(XX[ys[x+1]][xs[x+1]]==-1){
			vec2.clear();
			for(int i=0;i<vec1.size();i++){
				for(int j=0;j<4;j++){
					if(S[vec1[i].first+dy[j]][vec1[i].second+dx[j]]=='X')continue;
					if(XX[vec1[i].first+dy[j]][vec1[i].second+dx[j]]!=-1)continue;
					if(FF[vec1[i].first+dy[j]][vec1[i].second+dx[j]])continue;
					vec2.push_back(make_pair(vec1[i].first+dy[j],vec1[i].second+dx[j]));
					FF[vec1[i].first+dy[j]][vec1[i].second+dx[j]]=true;
				}
			}
			vec1.clear();
			for(int i=0;i<vec2.size();i++)vec1.push_back(vec2[i]);
			cou++;
			for(int i=0;i<vec1.size();i++){
				XX[vec1[i].first][vec1[i].second]=cou;
			}
			
		}
		ans+=XX[ys[x+1]][xs[x+1]];
	}
	printf("%d\n",ans);
	return 0;
}