#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#define loop(i,a,b) for(int i = a; i < b; i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(), in.end()
#define shosu(x) fixed << setprecision(x)
using namespace std;

typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<string> vs;
const int inf = 1e9;
const ll INF = 2e18;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int main(){
	int q;
	cin>>q;
	int y[3]={200,195,195};
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		int out=c-1;
		loop(i,1,a)out+=y[i%3];
		if(a%3==0){
			out+=20*(b-1);
		}else{
			loop(i,1,b)if(i%2)out+=20;else out+=19;
		}
		cout<<196470-out<<endl;
	}
}