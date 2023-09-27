#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<set>
#include<stack>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
	double  x,y,s;
	while(cin >> x>> y >> s,x+y+s){
		int big= -INF;
		for(int i = 1; i<1000;i++){
			for(int j = 1; j <1000;j++){
				if((int(i*(x+100)/100))+int((j*(x+100)/100)) == s){
					big = max(big,int(i*(y+100)/100)+int(j*(y+100)/100));
				}
			}
		}
		cout << big << endl;
	}
}