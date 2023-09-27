#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include <cstring>
#include<vector>
#include<cmath>
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
	while(true){
	int ans =0;
	int n; cin >> n; if(!n) break;
	stack<int>stl;
	stack<int>str;
	char s[2]; scanf("%s",s);
	int lastsize = 0;
	rep(i,n){ 
	if(i != 0) scanf("%s",s);
	if(strcmp(s,"lu") == 0) stl.push(1); 
	if(strcmp(s,"ld") == 0)	stl.pop(); 
	if(strcmp(s,"ru") == 0) str.push(1);
	if(strcmp(s,"rd") == 0) str.pop();
	int lsize = stl.size();
	int rsize = str.size();
	if(lsize ==rsize && lsize != lastsize){ans++;lastsize = lsize;}
		}
	cout << ans << endl;
	}
}