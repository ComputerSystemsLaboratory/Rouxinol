#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <algorithm>
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

int n;

int main(){
	while(1){
		cin>>n;
		if(n==0) break;
		int A=0,B=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(a>b) A+=(a+b);
			else{
				if(a<b) B+=(a+b);
				else{
					A+=a;
					B+=b;
				}
			}
		}
		cout<<A<<' '<<B<<endl;
	}
}