#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

vector<char> a(4),b(4);

int main(){
	char c,d,e,f;
	while(cin>>c>>d>>e>>f){
		int hit=0,blow=0;
		a[0]=c;
		a[1]=d;
		a[2]=e;
		a[3]=f;
		for(int i=0;i<4;i++) cin>>b[i];
		for(int i=0;i<4;i++){
			if(a[i]==b[i]) hit++;
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j) continue;
				if(a[i]==b[j]) blow++;
			}
		}
		cout<<hit<<' '<<blow<<endl;
	}
}