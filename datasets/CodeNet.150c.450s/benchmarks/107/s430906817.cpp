#include <iostream>
#include <string>
using namespace std;

int D[1001][1001] = {{0}};
string S,T;

int equal(char c,char d){
	if(c==d) return 0;
	else return 1;
}

int main(){
	cin >> S >> T;
	int n = S.size(),m = T.size();
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0) D[i][j] = j;
			else if(j==0) D[i][j] = i;
			else D[i][j] = min(D[i-1][j-1]+equal(S[i-1],T[j-1]),min(D[i-1][j]+1,D[i][j-1]+1));
		}
	}
	cout << D[n][m] << endl;
}
