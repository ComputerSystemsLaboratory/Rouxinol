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
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n;
int main(){
	while(cin>>n,n){
		vector<pii> dia;
		dia.clear();
		for(int i = 0;i < n;i++){
			string str;
			int h,m,s;
			cin>>str;
			h = ((str[0]-'0')*10+(str[1]-'0'))*60*60;
			m =((str[3]-'0')*10 +(str[4]-'0'))*60;
			s =(str[6]-'0')*10+(str[7]-'0');
			int dep = h+m+s;
			dia.push_back(pii(dep,1));
			cin>>str;
			h = ((str[0]-'0')*10+(str[1]-'0'))*60*60;
			m =((str[3]-'0')*10 +(str[4]-'0'))*60;
			s =(str[6]-'0')*10+(str[7]-'0');
			int arr = h+m+s;
			dia.push_back(pii(arr,-1));
		}
		sort(dia.begin(),dia.end());
		int ans = 0;
		int cnt = 0;
		for(int i = 0;i <dia.size();i++){
			cnt +=dia[i].second;
			ans =max(ans,cnt);
		}
		cout <<ans<<endl;
	}
	return 0;
}