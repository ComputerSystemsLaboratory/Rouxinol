#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<cctype>

#define MP make_pair
#define PB push_back
#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef long long LL;
typedef vector<int> VI;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	int n;
	VI ans;

	while(1){
		int n;
		int sum = 0,cnt = 0;
		cin >> n;
		if(n == 0) break;
		VI s(n);
		
		for(int i = 0;i < n;i++){
			cin >> s[i];
		}

		sort(s.begin(),s.end());

		for(int i = 1;i < s.size() - 1;i++){
			sum += s[i];
			cnt++;
		}

		ans.PB(sum / cnt);
	}

	for(int i = 0;i < ans.size();i++)
		cout << ans[i] << endl;;

	return 0;
}