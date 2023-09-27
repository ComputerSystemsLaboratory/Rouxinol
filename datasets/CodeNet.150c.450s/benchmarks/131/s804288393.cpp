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
	string s;
	int a;
	while(cin>>s>>a,a){
		while(s.size()!=a)s="0"+s;
		map<string,int>ma;
		ma[s]=1;
		int t=1;
		while(1){
			t++;
			sort(all(s));
			string q=s;
			reverse(all(q));
//			cout<<q<<" "<<s<<endl;
			int sa=stoi(q)-stoi(s);
			s=to_string(sa);
//			cout<<s<<endl;
			while(s.size()!=a)s="0"+s;
			if(ma[s]){
				cout<<ma[s]-1<<" "<<sa<<" "<<t-ma[s]<<endl;
				break;
			}
			ma[s]=t;
		}
	}
}