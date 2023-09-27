#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

// int -> string の変換
string i_to_s(int n){
	string s;
	do{
		s.push_back( (n%10)+'0' );
		n /= 10;
	}while( n != 0 );
	reverse( s.begin() , s.end() );
	return s;
}

// string -> int の変換
int s_to_i(string s){
	int n = 0;
	for(int i=0 ; i < s.size() ; i++ ){
		n *= 10;
		n += s[i] - '0';
	}
	return n;
}


int main(){
	string a_0;
	int l;
	// 初項 a_0 と 桁数 l の入力
	while( cin >> a_0 >> l ){
		if( a_0 == "0" && l == 0 ) break;
		
		int ans_i, ans_j, ans_a;
		string a[21];
		a[0] = a_0;
		// m[n] := 値 n が何番目の項か返すようにメモしていく.
		map<string,int> m;
		
		// 桁数が l になるまで先頭に 0 をつける.
		while( a[0].size() < l ) a[0] = "0" + a[0];
		
		// a[0] は 0 番目の項
		m[ a[0] ] = 0;
		
		sort( a[0].begin() , a[0].end() );
		// A := 並び替えたときの小さい方
		int A = s_to_i( a[0] );
		// B := 並び替えたときの大きい方
		reverse( a[0].begin() , a[0].end() );
		int B = s_to_i( a[0] );
		// a[1] が決まる.
		a[1] = i_to_s( B - A );
		
		// a[i] == a[j](j < i) となる a[j] がみつかるまで数列を計算する. 
		for(int i=1 ; ; i++ ){
			// 桁数が l になるまで先頭に 0 をつける.
			while( a[i].size() < l ) a[i] = "0" + a[i];
			
			if( m.count(a[i]) ){ // a[i] == a[j](j < i) となる a[j] が存在するとき.
				ans_a = s_to_i( a[i] );
				ans_i = i;
				ans_j = m[ a[i] ];
				break;
			}else{
				m[ a[i] ] = i;
			}
			// A := 並び替えたときの小さい方
			sort( a[i].begin() , a[i].end() );
			int A = s_to_i( a[i] );
			// B := 並び替えたときの大きい方
			reverse( a[i].begin() , a[i].end() );
			int B = s_to_i( a[i] );
			// a[i+1] が決まる.
			a[i+1] = i_to_s( B - A );
		}
		// 解の出力.
		cout << ans_j << " " << ans_a << " " << (ans_i - ans_j) << endl;
	}
}