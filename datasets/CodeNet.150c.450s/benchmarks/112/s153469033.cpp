#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <queue>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
#include <list>
using namespace std;
typedef long long int lli;
typedef pair<int,int> P;
#define F first
#define S second
const int INF=1000000000;

int main(){
	int n;
	while(cin>>n&&n){
		vector<pair<char,char> > table(n);
		for(int i=0; i<n; ++i){
			char t1,t2;
			cin >> t1 >> t2;
			table[i].F=t1;
			table[i].S=t2;
		}
		int m;
		cin >> m;
		string ans;
		for(int i=0; i<m; ++i){
			char tmp;
			cin >> tmp;
			for(int j=0; j<n; ++j){
				if(table[j].F==tmp){
					tmp=table[j].S;
					break;
				}
			}
			ans+=tmp;
		}
		cout << ans << endl;
	}
	return 0;
}