
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct load{
	int d;	//道の長さ
	int p;	//期待値
	bool operator<( const load& right ) const {
        return p == right.p ? d < right.d : p < right.p;
    }
};

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1) {
		int N, M;
		vector<load> l;
		cin >> N >> M;

		if( N == 0 && M == 0 ) break;
		for(int i = 0; i < N; i++) {
			int d,p;
			cin >> d >> p;
			load nl;
			nl.d = d;
			nl.p = p;
			l.push_back(nl);
		}

		sort( l.begin(), l.end() );
		for(int i = l.size() - 1 ; i >= 0 && M > 0 ; i --) {
			if( M - l.at(i).d >= 0 ) {
				M -= l.at(i).d;
				l.at(i).d = 0;
			} else if( M - l.at(i).d < 0 ) {
				l.at(i).d -= M;
				M = 0;
			}
		}

		int ans = 0;
		for(int i = 0; i < l.size(); i++)
			ans += l.at(i).d * l.at(i).p;

		cout << ans << endl;
	}

	//while(1){}

	return 0;
}