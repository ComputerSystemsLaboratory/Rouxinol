#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int min3(int a, int b, int c){
	int d = min(a, b);
	return min(c, d);
}

int LevenshteinDistance(string str1, string str2){
	int dis[1001][1001], cost;

	for(int i=0;i<=str1.length();i++)
		dis[i][0] = i;
	for(int j=0;j<=str2.length();j++)
		dis[0][j] = j;

	for(int i=1;i<=str1.length();i++){
		for(int j=1;j<=str2.length();j++){
			if(str1[i-1] == str2[j-1])
				cost = 0;
			else
				cost = 1;

			dis[i][j] = min3(dis[i-1][j]+1, dis[i][j-1]+1, dis[i-1][j-1]+cost);
		}
	}

	return dis[str1.length()][str2.length()];
}

int main(){
	string str1, str2;

	cin>>str1;
	cin>>str2;

	cout<<LevenshteinDistance(str1, str2)<<endl;
	return 0;
}