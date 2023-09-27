#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int w,h;
	while(1){
		cin>>w>>h;if(w==0&&h==0)break;
	int map[55][55]={};
	int W=0;
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
		{int x;cin>>x;if(x==1){W++;map[i+1][j+1]=W;}}

	int MAP[55][55]={};int c=0;
	for(int i=0;i<h+1;i++)
		for(int j=0;j<w+1;j++)
		{if(map[i][j]>0){c=map[i][j];

	int G[10]={map[i-1][j-1],map[i-1][j],map[i-1][j+1],map[i][j-1],map[i][j],map[i][j+1],map[i+1][j-1],map[i+1][j],map[i+1][j+1]};
			if(map[i-1][j-1]>0&&c>map[i-1][j-1])c=map[i-1][j-1];
			if(map[i-1][j]>0&&c>map[i-1][j])c=map[i-1][j];
			if(map[i-1][j+1]>0&&c>map[i-1][j+1])c=map[i-1][j+1];
			if(map[i][j-1]>0&&c>map[i][j-1])c=map[i][j-1];
			if(map[i][j+1]>0&&c>map[i][j+1])c=map[i][j+1];
			if(map[i+1][j-1]>0&&c>map[i+1][j-1])c=map[i+1][j-1];
			if(map[i+1][j]>0&&c>map[i+1][j])c=map[i+1][j];
			if(map[i+1][j+1]>0&&c>map[i+1][j+1])c=map[i+1][j+1];
			for(int I=0;I<53;I++)
				for(int J=0;J<53;J++)
					for(int H=0;H<9;H++)
					{if(map[I][J]==G[H]&&map[I][J]>0)map[I][J]=c;}
	}
		}
	bool C[2502]={};
	for(int i=0;i<h+1;i++){//cout<<endl;
		for(int j=0;j<w+1;j++){//cout<<map[i][j]<<" ";
			if(map[i+1][j+1]>0)C[map[i+1][j+1]]=true;
		}
	}
	int R=0;
	for(int i=0;i<2501;i++)if(C[i]==true)R++;
			cout<<R<<endl;

	}
	return 0;
}