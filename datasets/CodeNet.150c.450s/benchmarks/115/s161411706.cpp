#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
static const int n=1000;
static const int m=1000;

int lcs(string X,string Y){
	int i,j,c[m+1][n+1];
	int m=X.size();
	int n=Y.size();
    
	for (i=0;i<m+1;i++) c[i][0]=i;
	for (j=0;j<n+1;j++) c[0][j]=j;
	for (i=1;i<m+1;i++){
		for (j=1;j<n+1;j++){
			int min=c[i-1][j]+1;
			if (min>c[i][j-1]+1)
				min=c[i][j-1]+1;
            if ((X[i-1]==Y[j-1])&&(min>c[i-1][j-1]+1))
				min=c[i-1][j-1]+1;
			c[i][j]=min;
		}
	}
	return m+n-c[m][n];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s1,s2;
	int m,i;	cin >> m;
	
	for (i=0;i<m;i++){
	cin >> s1 >> s2;
	cout << lcs(s1,s2) << endl;
	}
	return 0;
}