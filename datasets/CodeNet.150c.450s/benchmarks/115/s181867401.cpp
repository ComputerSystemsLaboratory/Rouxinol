#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b))

int LCS(string& wordA, string& wordB) {
	int i,j;
	int sizeA, sizeB;
	vector<vector<int> > lcs;
	sizeA=(int)wordA.size();
	sizeB=(int)wordB.size();
	lcs.resize(sizeA+1);
	lcs[0].resize(sizeB+1);
	for(i=0; i<=sizeB; ++i) {
		lcs[0][i]=0;
	}
	for(i=1; i<=sizeA; ++i) {
		lcs[i].resize(sizeB+1);
		lcs[i][0]=0;
		for(j=1; j<=sizeB; ++j) {
			if(wordA[i-1]==wordB[j-1]) lcs[i][j]=lcs[i-1][j-1]+1;
			else lcs[i][j]=MAX(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	return lcs[sizeA][sizeB];
}

int main() {
	int i,j,k,q;
	cin >> q;
	string wordA,wordB;
	for(i=0; i<q; ++i) {
		cin >> wordA >> wordB;
		cout << LCS(wordA, wordB) << endl;
	}
	return 0;
}