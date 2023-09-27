#include <bits/stdc++.h>
using namespace std;

const int MAX_H=21;

int H,ans,ok,rev;
vector<vector<int>> stones(MAX_H,vector<int>(5));
vector<int> seq(5);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
	while(cin >> H,H){
		for (int i=0;i<H;++i)
			for (int j=0;j<5;++j)
				cin >> stones[H-1-i][j];
		ans=0;
		while(1){
			ok=0;
			for (int i=0;i<H;++i){
				for (int j=0;j<5;++j) seq[j]=0;
				seq[2]=(stones[i][2]>0); rev=0;
				for (int j=1;j<=2;++j){
					if (seq[1+j]&&stones[i][2+j]==stones[i][2]) seq[2+j]=1;
					if (seq[3-j]&&stones[i][2-j]==stones[i][2]) seq[2-j]=1;
				}
				for (int j=0;j<5;++j) rev+=seq[j];
				if (rev>=3){
					ok=1; ans+=rev*stones[i][2];
					for (int j=0;j<5;++j){
						if (seq[j]) stones[i][j]=0;
					}
				}
			}
			for (int i=0;i<H;++i){
				for (int j=0;j<5;++j){
					if (!stones[i][j]){
						for (int k=i+1;k<H;++k){
							if (stones[k][j]){
								stones[i][j]=stones[k][j];
								stones[k][j]=0;
								break;
							}
						}
					}
				}
			}
			if (!ok) break;
		}
		cout << ans << '\n';
	}
}
