#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> 


#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;


int main() {

	while(1){
		
		int n;
		cin >> n;
		string str1,str2;
		int ans=0;

		if(n==0) break;
	
		for(int i=n;i>0;i--){
			cin >> str1;

			i--;
			if(i==0){
				break;
			}
			cin >> str2;
			
			if((str1=="lu"&&str2=="ru")||(str1=="ru"&&str2=="lu")||(str1=="ld"&&str2=="rd")||(str1=="rd"&&str2=="ld")) ans++;
		}
		
		cout << ans << endl;
		
	}
	


}