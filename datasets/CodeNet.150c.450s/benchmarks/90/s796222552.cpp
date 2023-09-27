#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	int n, m=0;
	map<int,int> a;
	vector<int> ans;

	for(int i=1 ; i<=100 ; i++){
		a.insert( map<int,int>::value_type( i , 0 ) );
	}
	while( cin >> n ){
		a[n] += 1;
	}
	for(int i=1 ; i<=100 ; i++){
		m = max( a[i] , m );
	}
	for(int i=1 ; i<=100 ; i++){
		if( m == a[i] ) ans.push_back(i);
	}

	sort( ans.begin() , ans.end() );
	for(int i=0 ; i<ans.size() ; i++){
		cout << ans[i] << endl;
	}
}