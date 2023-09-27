#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	map<int,int> dic;
	int mx = 0;
	while( cin >> n ) dic[n]++,mx = max(dic[n],mx);
	for( auto x : dic ){
		if( x.second == mx ) cout << x.first << endl;
	}
}