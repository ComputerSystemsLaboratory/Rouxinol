#include<iostream>
using namespace std;
int main(){
	bool nn[128]={0},mm[128]={0},flg;
	int n,m,in;
	int sum_n,sum_m;
	while(cin>>n>>m,n){
		//初期化開始
		for(int i=0;i<128;i++){
			nn[i]=false; mm[i]=false;
		}
		sum_n=0; sum_m=0; flg=false;
		//初期化終了
		for(int i=0;i<n;i++){//n入力
			cin>>in;
			nn[in]=true;
			sum_n+=in;
		}
		for(int i=0;i<m;i++){//m入力
			cin>>in;
			mm[in]=true;
			sum_m+=in;
		}
		if((sum_n-sum_m)%2!=0){cout<<"-1"<<endl;}//差が奇数の場合どうあがいてもムリ
		else if(sum_n<=sum_m){//mの合計の方が大きい場合or等しい場合
			int diff=sum_m-sum_n;//diff>=0(非負)
			for(int i=1;i<=100-diff/2;i++){//範囲適当。超えても被害ないし.
				if(nn[i]&&mm[i+diff/2]){
					cout<<i<<' '<<i+diff/2<<endl;
					flg=true;
					break;
				}
			}
			if(!flg)cout<<"-1"<<endl;
		}
		else{
			int diff=sum_n-sum_m;//diff>0(非負)
			for(int i=1;i<=100-diff/2;i++){//範囲適当。超えても被害ないし.
				if(nn[i+diff/2]&&mm[i]){
					cout<<i+diff/2<<' '<<i<<endl;
					flg=true;
					break;
				}
			}
			if(!flg)cout<<"-1"<<endl;
		}
	}
}