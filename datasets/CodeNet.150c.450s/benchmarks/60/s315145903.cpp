#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n;
	int P[105][105]={};

	cin>>n;

	for(int i=0;i<n;i++){
		int x;cin>>x;
		
		int y;cin>>y;
		for(int j=0;j<y;j++){
			int Y;
			cin>>Y;
			Y;
			P[x][Y]=1;
		}

	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			{if(j>1)cout<<" ";
				cout<<P[i][j];
		}
		cout<<endl;
	}

	return 0;
}
				