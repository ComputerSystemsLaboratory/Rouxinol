#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool A[110][110];

int main (){
	int n,a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				A[i][j]=false;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=b;j++){
			cin>>c;
			A[a][c]=true;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<A[i][j]<<(j==n?"\n":" ");
		}
	}
	return 0;
}
