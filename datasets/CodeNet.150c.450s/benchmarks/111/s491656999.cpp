#include <iostream>
#include <map>
#include <vector>

#define rep(i,s,n) for(int i=(s);i<(n);i++)

typedef unsigned long long ull;

using namespace std;

//考え方：1+2+3=6 -> 1+2 = 6-3 -> 1+2 = 3 -> 1=3-2 -> 1= 1
//計算済みデータのメモ領域,左辺の項列，項目列，右辺の解の引数
//戻り値には0~n番目までの項のみの解がansになる符号の打ち方の個数
ull solve(map<int,ull> *mem,int *seq,int n,int ans){
	//0~n番目までの項の解が0未満20より大きくなれば条件に従わないので
	//再帰を打ち切って0を出力
	if(ans<0 || ans>20) return 0;
	//すでに計算済みのデータであれば出力
	if(mem[n-1].find(ans)!=mem[n-1].end())
		return mem[n-1][ans];
	//項の長さが１つならば
	if(n==1){
		//項と結果がおなじなら１を出力
		if(ans==seq[n-1])
			return 1;
		//違う場合は2を出力
		return 0;
	}
	//n項目までのansの計算結果の変数
	ull result=0;
	//足し算と引き算を行った時のn項目以前の計算値の変数
	int ansP,ansM;
	//n項目までの計算値を求める
	ansP=ans-seq[n-1];
	ansM=ans+seq[n-1];

	//足し算の場合と引き算の場合をそれぞれを再帰的解を求める
	result+=solve(mem,seq,n-1,ansM);
	result+=solve(mem,seq,n-1,ansP);
	//メモに計算結果を代入
	mem[n-1][ans]=result;
	
	//計算結果を出力
	return result;
}


int main(void){

	int n;
	int seq[100];
	int ans;

	//入力
	while(cin >> n){
		//わかりやすいようにn-1
		n--;
		//左辺を入力
		rep(i,0,n)	cin >> seq[i];
		//右辺を入力
		cin >> ans;

		//計算結果をメモする変数
		map<int,ull> mem[n];
		//計算と出力
		cout << solve(mem,seq,n,ans) << endl;
	}

	return 0;
}