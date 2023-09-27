
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define max 150

struct rect{
	int w;
	int h;
	int l;	//対角線の長さの2乗

	//sortを用いるために演算子 < をオーバーライドする
	bool operator<( const rect& right ) const {
        return l == right.l ? h < right.h : l < right.l;
    }
};

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	//長方形テーブル作成
	vector<rect> v;

	for(int i = 1; i <= max; i++) {
		for(int j = i + 1; j <= max; j++) {
			rect r;
			r.h = i;
			r.w = j;
			r.l = i * i + j * j;
			v.push_back( r );
		}
	}

	//長方形をソート
	sort( v.begin(), v.end() );


	while(1) {
		int w, h;
		cin >> h >> w;
		if( h == 0 && w == 0 ) break;


		int ans = -1;
		for(int i = 0; i < v.size(); i++) {
			if( h == v.at(i).h && w == v.at(i).w ) {
				ans = i + 1;
				break;
			}
		}
		cout << v.at( ans ).h << " " << v.at( ans ).w << endl;

	}

	//while(1){}

	return 0;
}