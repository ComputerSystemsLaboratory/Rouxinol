#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

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

int main(){
	int h,w;
	while(cin>>h>>w,h||w){
		int dig =(h*h)+(w*w);
		bool ok =false;
		int ans =INF;
		int ansh =INF;
		int answ = INF;
		for(int i =1;i <=150&&!ok;i++){
			for(int j =i+1;j <=150&&!ok;j++){
				if(i==h&&j==w)continue;
				int tmp =(i*i)+(j*j);
				int diff=tmp-dig;
				if(tmp >dig){
					if(ans >diff){
						//if(i <h)continue;
						ans =diff;
						ansh =i;
						answ =j;
					}else if(ans==diff){
						if(i >ansh)continue;
						ans =diff;
						ansh =i;
						answ =j;
					}
				}else if(tmp==dig){
					if(i >h){
						ansh =i;
						answ =j;
						ok =true;
						break;
					}
				}
			}
		}
		cout <<ansh<<" "<<answ<<endl;
	}
	return 0;
}