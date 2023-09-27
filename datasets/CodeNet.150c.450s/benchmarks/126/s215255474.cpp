#include <iostream>
#include <vector>
#include <stack>
using namespace std;
typedef pair<int,int> P;
typedef vector<int> V;

int main(){
	while( 1 ){
		int a, b, n;
		cin >> a >> b;
		cin >> n;
		if( a == 0 && b == 0 ) break;
		vector< V > map( a, V(b));
		for( int i = 0; i < a; i++ ){
			for( int j = 0; j < b; j++ ){
				map[i][j] = 1;
			}
		}
		//input
		for( int i = 0; i < n; i++ ){
			int x, y;
			cin >> x >> y;
			map[x-1][y-1] = 0;
		}
		/*for( int i = 0; i < a; i++ ){
			for( int j = 0; j< b; j++ ){
				cout << map[i][j];
			}
			cout << endl;
		}*/
		int i, j;
		int way = 0;
		stack< P > st;
		st.push( P(0,0) );
		//search
		while( !st.empty() ){
			if( st.top() == P(a-1,b-1) ){
				way++;
				st.pop();
				if( st.empty() ) break;
			}
			i = st.top().first;
			j = st.top().second;
			st.pop();
			//cout << i << ' ' << j << endl;
			if( i+1 < a && map[i+1][j] == 1 ){
				//cout << i+1 << ' ' << j << endl;
				st.push( P(i+1,j) );
			}
			if( j+1 < b && map[i][j+1] == 1 ){
				//cout << i << ' ' << j+1 << endl;
				st.push( P(i,j+1) );
			}
		}
		//output
		cout << way << endl;
	}
}