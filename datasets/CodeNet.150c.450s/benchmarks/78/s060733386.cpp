
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define max 1000000

//正四面体数を返す
int getRt(int n){
	return (n) * (n + 1) * (n + 2) / 6;
}
int min(int p, int q) {
	if( p > q ) return q;
	return p;
}

int main(void){
//	FILE* fp_in = freopen("data.txt", "r", stdin);
	
	vector<int> Rtlist;
	vector<int> Rtlist2;
	vector<int> vn;
	vector<int> vo;
	//正四面体数テーブル
	for(int i = 1; getRt(i) <= max; i++) {
		Rtlist.push_back( getRt(i) );
		if( getRt(i) % 2 != 0 ) Rtlist2.push_back( getRt(i) );
	}
	//答えのテーブル
	for(int i = 0; i <= max; i++) {
		vn.push_back(i);
		vo.push_back(i);
	}
	for(int i = 0; i < Rtlist.size(); i++)
		vn.at( Rtlist.at(i) ) = 1;
	for(int i = 0; i < Rtlist2.size(); i++)
		vo.at( Rtlist2.at(i) ) = 1;
	
	//動的計画法を用いる
	/*
		正四面体数p
		vn(n+p) = min( vn(n) + 1, vn(n+p) ) 
	*/
	for(int i = 1; i <= max; i++ )
		for(int j = 0; j < Rtlist.size() && i + Rtlist.at(j) <= max ; j++)
			vn.at( i + Rtlist.at(j) ) = min( vn.at( i ) + 1, vn.at( i + Rtlist.at(j) ) );
	for(int i = 1; i <= max; i++ )
		for(int j = 0; j < Rtlist2.size()  && i + Rtlist2.at(j) <= max ; j++)
			vo.at( i + Rtlist2.at(j) ) = min( vo.at( i ) + 1, vo.at( i + Rtlist2.at(j) ) );

	
	while(1){
		int n, tmp;
		cin >> n;
		if( n == 0 ) break;

		cout << vn.at(n) << " " << vo.at(n) << endl;

	}

//	while(1){}

	return 0;
}