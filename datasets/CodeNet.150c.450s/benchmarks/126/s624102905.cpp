#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,x,y;
	int k;
	while(cin >> a >> b && a!=0){
		cin >> k;
		int DP[20][20]={};	
		bool isStone[20][20]={};		
	for(int i=0;i<k;i++){
			cin >> x >> y;
			isStone[x][y]=true;
		}
		DP[1][1]=1;
		for(int j=1;j<=b;j++)
			for(int i=1;i<=a;i++)
				if(i!=1||j!=1)
					if(!isStone[i][j])
						DP[i][j]=DP[i-1][j]+DP[i][j-1];
		cout << DP[a][b] << endl;
	}
	return 0;
}