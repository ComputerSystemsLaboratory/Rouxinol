#include<iostream>
#include<string.h>
#include<map>
using namespace std;

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

int main()
{
	int n;
	while(cin>>n && n!=0){
		bool goal[20];
		memset(goal,false,sizeof(goal));
		int gx[20],gy[20];
		map<pair<int,int>,int> Idx;
		for(int i=0;i<n;i++){
			cin>>gx[i]>>gy[i];
			Idx[make_pair(gx[i],gy[i])]=i;
		}

		int m; 
		cin>>m;
		int x=10,y=10;
		for(int i=0;i<m;i++){
			int r=0,dist;
			char c;cin>>c>>dist;
			if(c=='N') r=2;
			else if(c=='E') r=1;
			else if(c=='S') r=0;
			else r=3;

			if(Idx.count(make_pair(x,y))){
				goal[Idx[make_pair(x,y)]]=true;
			}


			for(int k=0;k<dist;k++){
//				cout<<x<<" "<<y<<endl;
				x+=dx[r];y+=dy[r];
				if(Idx.count(make_pair(x,y))){
					goal[Idx[make_pair(x,y)]]=true;
				}
			}
		}
		bool ok=true;
		for(int i=0;i<n;i++){
			if(!goal[i]) ok=false;
		}
		if(ok) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}