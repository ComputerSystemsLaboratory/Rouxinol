#include<iostream>
#include<string>
using namespace std;
int main(){
	bool dp[20][20];
	char r[20][20];
	int w,h;
	while(true){
	cin>>w>>h;
	if(w==0&&h==0)
		break;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>r[i][j];
			dp[i][j]=false;
			if(r[i][j]=='@')
				dp[i][j]=true;
		}
	}
	int count=1,cop=1;
	while(true){
	cop=count;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			bool t=false;
			if(i<h-1){
			if(dp[i+1][j]==true&&r[i][j]=='.')
				t=true;
			}
			if(i>0){
			if(dp[i-1][j]==true&&r[i][j]=='.')
				t=true;
			}
			if(j<w-1){
			if(dp[i][j+1]==true&&r[i][j]=='.')
				t=true;
			}
			if(j>0){
			if(dp[i][j-1]==true&&r[i][j]=='.')
				t=true;
			}
			if(t==true&&dp[i][j]==false){
				count++;
				dp[i][j]=true;
			}
		}
	}
	if(cop==count)
		break;
	}
	cout<<count<<endl;
	}
    return 0;
}