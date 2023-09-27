#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int EditDistance(string s1,string s2){
	int r=s1.size();
	int c=s2.size();
	int DP[r+1][c+1];

	for(int i=0;i<r+1;i++){
		DP[i][0]=i;
	}
	for (int j=0;j<c+1;j++){
		DP[0][j]=j;
	}

	for (int i=1;i<r+1;i++){
		for (int j=1;j<c+1;j++){
			if(s1[i-1]==s2[j-1]){
				DP[i][j]=min( min(DP[i-1][j] +1, DP[i][j-1]+1) , DP[i-1][j-1]);
			}else{
				DP[i][j]=min( min(DP[i-1][j] +1, DP[i][j-1]+1) , DP[i-1][j-1]+1);
			}
		}
	}
	return DP[r][c];
}

int main(){
	string s1,s2;
	cin >> s1 >> s2;

	cout << EditDistance(s1,s2) << endl;
}