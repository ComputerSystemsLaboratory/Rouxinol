#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int c[1001][1001];

int lcs(string X,string Y){
	

int m = X.size();
int n = Y.size();
int max1 = 0;

X = ' '+X;
Y = ' '+Y;
for(int i=1;i<=m;i++) c[i][0] = 0;
for(int j=1;j<=n;j++) c[0][j] = 0;

for(int i=1;i<=m;i++){
	for(int j=1;j<=n;j++){
		if(X[i]==Y[j]){
			c[i][j] = c[i-1][j-1]+1; 
		}
		else {
			c[i][j] = max(c[i-1][j],c[i][j-1]);
		}
		max1 = max(max1,c[i][j]);
		}
	} 
	return max1;
}



int main(){
	int q;
	string s1,s2;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>s1>>s2;
		cout<<lcs(s1,s2)<<endl;
	}
	return 0;
} 