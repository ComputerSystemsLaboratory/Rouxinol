//
// 2006 国内予選B問題
// 列車の編成パートII
//
// setとstringを用いて簡素に書いた版
// 06/21 Tsuji
//

//利用するのはsetとstringなのでinclude
#include <iostream>
#include <set>
#include <string>

//stdを省略
using namespace std;

//入力された文字列を反転する関数 引数は参照渡し
string reverseString(string &str){
	string res="";

	for(int i=str.size()-1;i>=0;i--){
		res+=str.at(i);
	}
	return res;
}

//解法関数 引数は入力された文字列
int solve(string str){
	set<string> sets;			//string型のsetを宣言
	int strsize=str.size();		//文字列の長さは頻繁にアクセスするので変数化
	string strs[4];				//分離した文字列とそれの反転したものを保持する4つの配列

	for(int i=0;i<strsize;i++){				//任意のi番目で分離することを考える
		strs[0]=str.substr(0,i);			//前半部
		strs[1]=str.substr(i,strsize-i);	//後半部

		strs[2]=reverseString(strs[0]);		//前半部の反転
		strs[3]=reverseString(strs[1]);		//後半部の反転

		//組み合わせをfor文を使って生成する
		for(int x=0;x<4;x++){
			for(int y=0;y<4;y++){
				//前半部同士や，前半部とその反転同士にならないように
				//偶数番目が前半部について，奇数番目が後半部についてなってることに着目して
				if(x%2!=y%2)	sets.insert(strs[x]+strs[y]);
			}
		}
		//直ガキした場合，前半部をstr1,後半部をstr2,前半部の反転をrev_str1,後半部の反転をrev_str2としたとき
		// sets.insert(str1+str2);
		// sets.insert(str1+rev_str2);
		// sets.insert(str2+str1);
		// sets.insert(str2+rev_str1);
		// sets.insert(rev_str1+str2);
		// sets.insert(rev_str1+rev_str2);
		// sets.insert(rev_str2+str1);
		// sets.insert(rev_str2+rev_str2);
		// と同じ事
	}
	//setは重複した場合は追加されていないのでsetsのsizeが組み合わせの数になるので出力する
	return sets.size(); 
}

//main関数
int main(void){
	int m;
	string str;

	//cinはc++での標準入力関数
	//scanf("%s",str);
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> str;
		//coutはc++での標準出力関数
		//printf("%d\n",solve(str));
		cout << solve(str) << endl;
	}

	return 0;
}