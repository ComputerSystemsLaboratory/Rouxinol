#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
Def inf = sizeof(Def) == sizeof(long long) ?  2e18:1e9+10;
int main(){
	int n,m;
	while(cin>>n>>m,n){
		int t=n*n+m*m;
		for(int i=t;;i++){
			loop(h,1,160)loop(w,1,160){
				int tt=h*h+w*w;
				if(i==tt){
					if(h>=w)continue;
					if(i==t&&h<=n)continue;
					cout<<h<<" "<<w<<endl;
					goto end;
				}
			}
		}
		end:;
	}
}
