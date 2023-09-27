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

string table[]={"qwertasdfgzxcvb","yuiophjklnm"};


int main(){
	
	while(true){
		int member,winner,pool;
		int monney=0,all_monney=0,w_monney=0;

		cin >> member >> winner >> pool;
	
		if(monney==0&&winner==0&&pool==0) break;

		for(int i=1;i<=member;i++){
			cin >> monney;
			if(i==winner){
				w_monney=monney;
			}
			all_monney+=monney;
		}

		if(w_monney==0){
			cout << 0 << endl;
		}else{
			/*all_monney=(all_monney*100)-((all_monney*100)*(pool/100));
			all_monney=all_monney/w_monney;
			*/
			int sub=0;
			all_monney=all_monney*100;
			sub=(all_monney*pool)/100;
			w_monney=(all_monney-sub)/w_monney;

			cout << w_monney << endl;
		}
	}

}