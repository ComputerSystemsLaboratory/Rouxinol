#include <bits/stdc++.h>
using namespace std;
bool isBuilding[20][20];
int solve(int x,int y){
	if(x==0 || y==0) return 0;
	if(isBuilding[x][y]) return 0;
	if(x==1 && y==1) return 1;
	return solve(x,y-1)+solve(x-1,y);
}
int main() {
	int a,b,n,x,y;
	while(cin >> a >> b && a!=0){
		for(int i=0;i<20;i++)
			for(int j=0;j<20;j++)
				isBuilding[i][j]=false;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			isBuilding[x][y]=true;
		}
		cout << solve(a,b) << endl;
	}
	// your code goes here
	return 0;
}