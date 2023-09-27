#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int h,w;
	int mas[11][10001];
	while(cin >> h >> w && h && w){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> mas[i][j];
			}
		}
		int ans = 0;
		for(int i=0;i<(1<<h);i++){
			int sum = 0;
			for(int j=0;j<w;j++){
				int cou=0;
				for(int k=0;k<h;k++){
					cou += mas[k][j]^(i>>k&1);
				}
				sum += max(h-cou,cou);
			}
			ans = max(ans,sum);
		}
		cout << ans << endl;
	}
}