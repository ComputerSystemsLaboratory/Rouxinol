#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	long long int m;
	while( cin >> n >> m && n ){
		//vector<int> list;
		int a[11] = {};
		for( int i = 0; i < n; i++ ){
			int d, p;
			cin >> d >> p;
			a[p] += d;
		}
		int result = 0;
		for( int i = 10; i > 0 && m; i-- ){
			while( m ){
				if( a[i] > 0 ){
					a[i]--;
					m--;
				}else{
					break;
				}
				//cout << m << endl;
			}
		}
		/*for( int i = 0; i < 11; i++ ){
			cout << a[i] << endl;
		}*/
		for( int i = 1; i <= 10; i++ ){
			result += a[i] * i;
		}
		/*
		sort( list.begin(), list.end() );
		reverse( list.begin(), list.end() );
		vector<int>::iterator it = list.begin();
		while( m-- > 0 ){
			it++;
		}
		for( ; it != list.end(); it++ ){
			result += *it;
		}*/
		cout << result << endl;
		//list.clear();
	}
}