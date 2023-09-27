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
	string s,p;
	cin >> s >> p;
	int k,f;
	for (int i = 0; i < s.size(); ++i)
	{
		k = i;
		for (int j = 0; j < p.size(); ++j)
		{
			if (s[k] == p[j])
			{
				k++;
				if (k == s.size())
				{
					k = 0;
				}
			}else{
				f = 1;
				break;
			}
		}
		if (f == 1)
		{
			f = 0;
		}else{
			f = 2;
			break;
		}
	}
	if(f == 0){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}
}