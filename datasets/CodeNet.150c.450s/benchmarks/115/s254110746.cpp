#include<iostream>
#include<vector>
#include<limits.h>
#include<string>
using namespace std;

int LCS(string a, string b){
	int n=a.size();
	int m=b.size();
	int T[n+1][m+1];
	int i,j;
	for (i=0;i<n+1;i++) T[i][0]=i;
	for (j=0;j<m+1;j++) T[0][j]=j;
	for (i=1;i<n+1;i++){
		for (j=1;j<m+1;j++){
			int min=T[i-1][j]+1;
			if (min>T[i][j-1]+1){
				min=T[i][j-1]+1;
			}
			if ((a[i-1]==b[j-1])&&(min>T[i-1][j-1]+1)){
				min=T[i-1][j-1]+1;
			}
			T[i][j]=min;
		}
	}
	return n+m-T[n][m];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,i;
	cin >> n;
	
	string a,b;
	for (i=0;i<n;i++){
		cin >> a >> b;
		cout << LCS(a,b) << endl;
	}
	return 0;
}