#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;
 
#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
	string s[1000] = {""};
	int m[1000] = {0};
	int h[1000][1000] = {0};
	int i = 0;
	int j = 0;
	while(1){
		cin >> s[i];
		if(s[i] == "-") break;
		cin >> m[i];
		for (int k = 0; k < m[i]; ++k)
		{
			cin >> h[i][k];
		}
		i++;
	}
	i = 0;
	while(1){
		if(s[i] == "-") break;
		for (int k = 0; k < m[i]; ++k)
		{
			for (int l = 0; l < h[i][k]; ++l)
			{
				s[i] += s[i][0];
				s[i].erase(0,1);
			}
		}
		cout << s[i] << endl;
		i++;
	}
}