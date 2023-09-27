#include<iostream>
#include<string>
using namespace std;
const int N_MAX = 1005;
short res[N_MAX][N_MAX];

int lcs(string X, string Y){
	int xLen = X.size();
	int yLen = Y.size();
	int maxRes=0;
	X=' '+X;
	Y=' '+Y;
	for(int i=1;i<=xLen;i++){
		for(int j=1;j<=yLen;j++){
			if(X[i]==Y[j]){
				res[i][j] = res[i-1][j-1]+1;
			}else if(res[i][j-1]>=res[i-1][j]){
				res[i][j] = res[i][j-1];
			}else{
				res[i][j] = res[i-1][j];
			}
			maxRes = (res[i][j]>maxRes)?res[i][j]:maxRes;
		}
	}
	return maxRes;
}

int main(){
	int n;
	string X, Y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>X>>Y;
		cout<<lcs(X, Y)<<endl;
	}
}
