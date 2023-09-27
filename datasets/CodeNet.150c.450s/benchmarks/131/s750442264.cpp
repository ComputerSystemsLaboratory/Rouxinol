#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

string fix(int a,int l){
	stringstream ss;
	ss << a;
	string s = ss.str();
	while(s.size() < l) s = "0" + s;
	return s;
}


int main(){
	int a;
	int L;
	while( cin >> a >> L && L){
		map<int,int> done;
		done[a] = 0;
		
		for(int i = 1 ; ; i++){
			string x = fix(a,L);
			sort(x.begin(),x.end());
			string y = x;
			reverse(y.begin(),y.end());
			int na = atoi(y.c_str()) - atoi(x.c_str());
			if( done.count(na) ){
				cout << done[na] << " " << na << " " << i - done[na] << endl;
				break;
			}else{
				done[na] = i;
				a = na;
			}
		}
	}
}