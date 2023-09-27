#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <sstream>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
 
using namespace std;
 
#define ll long long
#define pi pair<int,int>
#define pll pair<ll,ll>
#define pii pair<int,pi>
#define X first
#define Y second
#define pb push_back
#define ab(x) ((x)<0?(-(x)):(x))
#define xx(x) ((x)*(x))
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vpi vector<pi>
#define vpll vector<pll>
#define ALL(x) (x).begin(),(x).end()
#define Max (1<<30)
#define LLMax (1ll<<60)
template<class T>string ToString(T t){stringstream s;s<<t;return s.str();}
template<class T>void ToOther(T&t,string a){stringstream s(a);s>>t;}


int n,L;
int ck[11000000];
int TT[11000000];

int NEXT(int x,int L){
	string r=ToString(x);
	while(r.size()<L)r+='0';
	string r2=r;
	sort(ALL(r),greater<char>() );
	sort(ALL(r2));
	int A,B;
	ToOther(A,r);
	ToOther(B,r2);
	return A-B;
}

int main(){
	int CC=0;
	while(cin>>n>>L){
		CC++;
		if(n==0 && L==0)break;
		
		for(int i=0;;i++){
			if(TT[n]==CC){
				cout<<ck[n]<<" "<<n<<" "<<i-ck[n]<<endl;
				goto E;
			}
			TT[n]=CC;
			ck[n]=i;
			n=NEXT(n,L);
		}
		E:;
	}
}