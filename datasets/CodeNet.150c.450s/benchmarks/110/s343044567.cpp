#include<iostream>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;
struct nagase {
		int x;
		int y;
		int c;
		int r;
};
int kani[4]={0,1,-1,0};
int ebi[4]={1,0,0,-1};
int map[1001][1001]={0};
int s[1001][1001]={0};
int main(){
	queue<nagase>Q;
	nagase kotani;
	nagase yanagi;
	int h,w,n;
	cin>>h>>w>>n;
	char a;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>a;
			if(a=='S'){
				kotani.x=i;
				kotani.y=j;
				kotani.c=1;
				kotani.r=0;
				s[i][j]=1;
				Q.push(kotani);
			}
			else if(a=='X'){
				map[i][j]=-1;
			}
			else if(a=='.'){
				map[i][j]=0;
			}
			else{
				map[i][j]=(int)(a-48);
			}
		}
	}
	while(!Q.empty()){
		yanagi=Q.front();
		Q.pop();
		if(yanagi.c==map[yanagi.x][yanagi.y]){
			if(yanagi.c==n){
				cout<<yanagi.r<<endl;
				break;
			}
			while(!Q.empty()){
				Q.pop();
			}
			yanagi.c++;
			memset(s,0,sizeof(s));
			s[yanagi.x][yanagi.y]=1;
			Q.push(yanagi);
		}
		else{
			for(int i=0;i<4;i++){
					kotani.c=yanagi.c;
					kotani.x=yanagi.x+kani[i];
					kotani.y=yanagi.y+ebi[i];
					kotani.r=yanagi.r+1;
					if(kotani.x>=0&&kotani.x<h&&kotani.y>=0&&kotani.y<w&&map[kotani.x][kotani.y]!=-1&&s[kotani.x][kotani.y]!=1){
					s[kotani.x][kotani.y]=1;
					Q.push(kotani);
				}
			}
		}
	}
}

		

			
	