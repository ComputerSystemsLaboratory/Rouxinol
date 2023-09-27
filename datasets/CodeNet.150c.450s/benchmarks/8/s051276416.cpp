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
	int n = 0;
	int point[2] = {0};
	int j = 0;
	string card[2][1000] = {""};
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> card[0][i] >> card[1][i];
		if(card[0][i] == card[1][i]){
			point[0] += 1;
			point[1] += 1;
		}else{
			for (int j = 0; j <= card[0][i].size(); ++j)
			{
				if(card[0][i][j] > card[1][i][j]){
					point[0] += 3;
					break;
				}else if(card[0][i][j] < card[1][i][j]){
					point[1] += 3;
					break;
				}
			}
		}
	}
	cout << point[0] << " " << point[1] << endl;
}