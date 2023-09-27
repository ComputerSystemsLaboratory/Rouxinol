#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
	map<char,char> mp;
	vector<char> str;
	char pr, ne;
	int n;
	while(1){
		mp.clear();
		str.clear();
		cin >> n;
		if( n == 0 )	break;
		for( int i=0; i<n; i++ ){
			cin >> pr >> ne;
			mp[pr] = ne;
		}
		cin >> n;
		for( int i=0; i<n; i++ ){
			cin >> pr;
			if( mp[pr] ){
				str.push_back(mp[pr]);
			}else{
				str.push_back(pr);
			}
		}
		for( int i=0; i<str.size(); i++ ){
			cout << str[i];
		}
		cout << endl;
	}
	return 0;
}