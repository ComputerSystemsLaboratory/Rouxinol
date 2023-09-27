#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<map>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define REPR(i,n) for(int i=n-1;i>=0;i--)
#define FORR(i,n,m) for(int i=n-1;i>=m;i--)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 100000000
#define MOD 100000007
#define SIZE 100005
#define pi 	3.14159265358979323846


int main(){
	string str;
	ll n;

	cin >> str >> n;

	REP(i,n){
		string s;
		ll st,en;
		cin >> s >> st >> en;
		en++;
		if(s=="print"){
			FOR(j,st,en){
				cout << str[j];
			}
			cout << endl;
		}

		if(s=="replace"){
			string temp;
			cin >> temp;
			FOR(j,st,en){
				str[j] = temp[j-st];
			}
		}

		if(s=="reverse"){
			string temp = str;
			FORR(j,en,st){
				str[j] = temp[st+en-j-1];
			}
			//cout << "rev" << endl;
		}

		//cout << str << endl;
	}
}
