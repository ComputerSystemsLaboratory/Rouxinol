#include <iostream>
#include <vector>
using namespace std;

int main (){
	int h;
	while(cin>>h && h){
		vector<vector<int>> v(h,vector<int>(5));
		for(int i=0;i<h;i++)for(int j=0;j<5;j++)cin>>v[i][j];//入力
		int ans=0;
		while(1){
			int flag=true; //消す石があったらtrueのまま
			//３個以上並ぶところを消す処理
			for(int i=0;i<h;i++){
				int chain; //同じ数字が並ぶ数
				for(int j=0;j<5;j++){
					chain=1;
					while(j+1<5 && v[i][j]!=-1 && v[i][j]==v[i][j+1]){
						chain++;
						j++;
					}
					if(chain>=3){ //3つ以上並んでいたら
						flag=false;
						ans+=chain*v[i][j];
						for(int k=0;k<chain;k++){ //その部分を-1に変える
							v[i][j-chain+k+1]=-1;
						}
						break;
					}
				}
			}
			if(flag)break; //消す石が無かったなら終了

			//石の落下処理。配列を縦に回す
			for(int p=0;p<h;p++){
				for(int i=0;i<5;i++){
					for(int j=h-1;j>=1;j--){
						if(v[j][i]==-1){
							for(int k=j;k>=1;k--)swap(v[k][i],v[k-1][i]);
						}
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
