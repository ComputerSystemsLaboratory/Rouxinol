#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<iomanip>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;

int main(){

	int n;
	cin >> n;
	rep(i,n){
		string text;

		map<string,int> list;
		list.clear();
		cin >> text;
//		cout << text << endl;

		rep(k,text.length()){
			string ab,cd,ba,dc;
			
			ab=text.substr(0,k);
			cd=text.substr(k,text.length());
			
			//cout << ab << "+" << cd << endl;

			ba=ab;
			dc=cd;

			reverse(ba.begin(),ba.end());
			reverse(dc.begin(),dc.end());
	
			list[ab+cd]=1;
			list[ab+dc]=1;
			list[ba+cd]=1;
			list[ba+dc]=1;
			list[cd+ab]=1;
			list[cd+ba]=1;
			list[dc+ab]=1;
			list[dc+ba]=1;
			
		}

		cout << list.size() << endl;
		
	}
}