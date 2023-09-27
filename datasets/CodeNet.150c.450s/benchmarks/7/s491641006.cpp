#include<iostream>
using namespace std;
int main(){
	int i,k=0,tmp,a[10];
	

	for(i=0;i<10;i++){
		cin>>a[i];
	}

	while(1){//無限ループ
		for(i=0;i<9;i++){
			if(a[i]<a[i+1]){//もし昇順でない場合
				tmp=a[i];//隣接しあう値を昇順に入れ替える
				a[i]=a[i+1];
				a[i+1]=tmp;
				k++;//カウント
			}
		}
		if(k==0) break;//入れ替える必要がなくなったら終了
		k=0;//カウントの初期化
	}
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
}