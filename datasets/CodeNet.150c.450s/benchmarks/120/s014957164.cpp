#include <iostream>
using namespace std;

int main() {
	while(true){
	int R,C;
	int cookie[11][10001];
	cin >> R >> C;
	if(R==C && C==0)
	break;
	for (int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			cin >> cookie[i][j];
			cookie[0][j]+=cookie[i][j];
		}
	}
	int maxer=0;
	for(int i=0;i<(1 << R);i++){
			int biter[10]={};
			int sum=0;
		for(int j=0;j<R;j++){
			if(i & (1<<j)){
				biter[j]=1;
				sum++;
			}
		}
		if(sum<=R/2){
			int S=0;
			for(int j=1;j<=C;j++){
				int t=0;
				for(int k=1;k<=R;k++){
					t+=cookie[k][j] ^ biter[k-1];
				}
				S+=max(t,R-t);
			}
			maxer=max(maxer,S);
		}
	}
	cout << maxer << endl;
	}
	return 0;
}