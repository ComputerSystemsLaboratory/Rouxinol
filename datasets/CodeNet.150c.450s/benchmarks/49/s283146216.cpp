#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<cassert>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl

using namespace std;


int main(){
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		vector<int> ans = vector<int>(n,0);
		rep(i,n){
			cin >> ans[i];
		}
		
		sort(ans.begin(),ans.end());
		
		int sum=0;
		for(int i=1;i<n-1;i++){
			sum+=ans[i];
		}
	
		cout << sum/(n-2) << endl;

	}


	return 0;
}