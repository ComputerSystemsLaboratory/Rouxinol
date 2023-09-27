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

	while(true){
		int a,b;
		cin >> a >> b;
				
		if(a==0&&b==0) break;

		int card[a];
		
			for(int i=a;0<i;i--){
				card[a-i]=i;
			}
			for(int i=0;i<b;i++){
				int c,d;
				cin >> c >> d;
				rotate(card,card+c-1,card+c+d-1);
			}
			cout << card[0] << endl;

	}
}