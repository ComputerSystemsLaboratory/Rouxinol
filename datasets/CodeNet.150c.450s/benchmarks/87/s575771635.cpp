#include <iostream>
#include <algorithm>

using namespace std;

int stage[10][5];

void downstone(int h){
	for(int i=h-1;i>=0;--i){
		for(int j=0;j<5;++j){
			if(stage[i][j]==0){
				for(int k=i-1;k>=0;k--){
					if(stage[k][j]){
						swap(stage[k][j],stage[i][j]);
						break;
					}
				}
			}
		}
	}
	return;
}

int deletestone(int h){
	int res=0;
	for(int i=h-1;i>=0;--i){
		for(int j=0;j<5;++j){
			int len=0;
			for(int k=j;k<5;++k){
				if(stage[i][j]==stage[i][k]) len++;
				else break;
			}
			if(len>=3){
				res+=stage[i][j]*len;
				for(int k=0;k<len;++k) stage[i][j+k]=0;
				break;
			}
		}
	}
	return res;
}

void show(int h){
	for(int i=0;i<h;++i){
		for(int j=0;j<5;++j) cout << stage[i][j] << " " ;
		cout << endl;
	}
	cout << endl;
}

int main(void){
	int h;
	while(cin>>h){
		if(h==0)
			break;
		for(int i=0;i<h;++i)for(int j=0;j<5;++j) cin >> stage[i][j];
		int ans=0;
		while(1){
			int cur=deletestone(h);
			if(cur==0) break;
			ans+=cur;
			//show(h);
			downstone(h);
			//show(h);
		}
		cout << ans << endl;
	}
	return 0;
}