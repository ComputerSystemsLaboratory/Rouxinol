#include<iostream>
#include<string>
using namespace std;
int dp[50][50];
int main(){
	int w,h;
	while(true){
	cin>>w>>h;
	if(w==0&&h==0)
		break;
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
			cin>>dp[i][j];
	int count=0;
	while(true){
		bool t=true;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(dp[i][j]!=0)
					t=false;
			}
		}
		if(t==true)
			break;
		int x=0,y=0;
		while(true){
			x=0;
			while(true){
				if(dp[y][x]==1){
					t=true;
					break;
				}
				x++;
				if(x==w)
					break;
			}
			if(t==true)
				break;
			y++;
		}
		for(int f=max(0,y-1);f<=min(h-1,y+1);f++){
			for(int g=max(0,x-1);g<=min(w-1,x+1);g++){
				if(dp[f][g]==1)
				    dp[f][g]=2;
			}
		}
		dp[y][x]=0;
		while(true){
			t=true;
			for(int i=0;i<h;i++){
				for(int j=0;j<w;j++){
					if(dp[i][j]==2){
						for(int f=max(0,i-1);f<=min(h-1,i+1);f++){
			                for(int g=max(0,j-1);g<=min(w-1,j+1);g++){
								if(dp[f][g]==1)
				                    dp[f][g]=2;
			                }
						}
						dp[i][j]=0;
						t=false;
					}
				}
			}
			if(t==true)
				break;
		}
		count++;
	}
	cout<<count<<endl;
	}
	return 0;
}