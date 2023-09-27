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
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


int main(){
	vector<string>keistr(10);
	keistr[1] = ".,!? ";
	keistr[2] = "abc";
	keistr[3] = "def";
	keistr[4] = "ghi";
	keistr[5] = "jkl";
	keistr[6] = "mno";
	keistr[7] = "pqrs";
	keistr[8] = "tuv";
	keistr[9] = "wxyz";
	int n;
	cin >> n;
	REP(i,n){
		string in_str;
		cin >> in_str;
		int cnt = -1;
		REP(j,in_str.size()){
			if(in_str[j]=='0'){
				if(cnt>=0){
					int pos = in_str[j-1] - '0';
					cout << keistr[pos][cnt%keistr[pos].size()];
					cnt = -1;
				}
			}else{
				cnt++;
			}
		}
		cout  << endl;
	}
}