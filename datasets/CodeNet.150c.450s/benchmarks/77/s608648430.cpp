#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>

using namespace std;


int n,cnt,x,y,t;
int fie[25][25];

int main(void){
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		cnt=0;
		memset(fie,0,sizeof(fie));
		for(int i=0;i<n;i++){
			scanf("%d %d",&x,&y);
			fie[x][y]=1;
		}
		x=10,y=10;
		if(fie[x][y]==1){
			fie[x][y]=0;
			cnt++;
		}
		scanf("%d",&t);
		for(int i=0;i<t;i++){
			string str;
			int d;
			cin >> str >> d;
			for(int j=0;j<d;j++){
				if(str=="N")y++;
				if(str=="E")x++;
				if(str=="W")x--;
				if(str=="S")y--;
				if(fie[x][y]==1){
					fie[x][y]=0;
					cnt++;
				}
			}
		}
		printf("%s\n",cnt==n?"Yes":"No");
	}
	return 0;
}