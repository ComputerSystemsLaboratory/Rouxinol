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
int n,m;
map<string,int> ma;
string str;
typedef pair<bool,string> p;
int main(){
	queue<p> que;
	cin>>n;
	bool flag = true;
	for(int i = 0;i < n;i++){
		cin>>str;
		ma[str]=1;
	}
	cin>>m;
	for(int i =0;i <m;i++){
		cin>>str;
		if(ma[str]==1){
			que.push(p(true,str));
		}else{
			que.push(p(false,str));
		}
	}
	while(!que.empty()){
		if(que.front().first){
			if(flag){
				cout <<"Opened by "<<que.front().second;
				flag =false;
			}
			else{
				cout <<"Closed by "<<que.front().second;
				flag =true;
			}
		}else{
			cout <<"Unknown "<<que.front().second;
		}
		que.pop();
		cout<<endl;
	}
	return 0;
}