#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int cnt[101];

int main(){
	int i;
	while( ~scanf("%d",&i) ){
		cnt[i]++;
	}
	
	int mmax = 0;
	//データ数を求める
	for( i = 0;i < 101;i++ ){
		mmax = max( mmax, cnt[i] );
	}
	
	//最頻値を探す( データ数と照らし合わせる )
	for( i = 0;i < 101;i++ ){
		if( cnt[i] == mmax ){
			printf("%d\n",i );
		}
	}
	return 0;
}