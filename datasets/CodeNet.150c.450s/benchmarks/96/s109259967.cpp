#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#include <iomanip>
#define fi first
#define se second
#define fcout(n) cout<<fixed<<setprecision((n))
#define cinl(str) getline(cin,(str))
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=1000000007;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };


int main() {
	int n;
	string ans="";
	string s;
	string y=".,!? abcdefghijklmnopqrstuvwxyz";
	int x,count=0;
	cin>>n;
	for(int j=0;j<n;j++){
		ans="";
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i] == '0' && count==0){
				//cout<<"C"<<endl;
				continue;
			}
			else if(s[i] != '0'){
				x=s[i]-'0';
				count++;
				//cout<<"B"<<endl;
			}
			else if(s[i] == '0' && count!= 0) {
				if(x==1){
					ans=ans+y[(count-1)%5];
				}
				if(x==2){
					ans=ans+y[5+(count-1)%3];
				}
				if(x==3){
					ans=ans+y[8+(count-1)%3];
				}
				if(x==4){
					ans=ans+y[11+(count-1)%3];
				}
				if(x==5){
					ans=ans+y[14+(count-1)%3];
				//	cout<<"A"<<endl;
				}
				if(x==6){
					ans=ans+y[17+(count-1)%3];
				}
				if(x==7){
					ans=ans+y[20+(count-1)%4];
				}
				if(x==8){
					ans=ans+y[24+(count-1)%3];
				}
				if(x==9){
					ans=ans+y[27+(count-1)%4];
				}
				count=0;
			}
			if(count!=0 && i==s.size()-1){
				if(x==1){
					ans=ans+y[(count-1)%5];
				}
				if(x==2){
					ans=ans+y[5+(count-1)%3];
				}
				if(x==3){
					ans=ans+y[8+(count-1)%3];
				}
				if(x==4){
					ans=ans+y[11+(count-1)%3];
				}
				if(x==5){
					ans=ans+y[14+(count-1)%3];
				//	cout<<"A"<<endl;
				}
				if(x==6){
					ans=ans+y[17+(count-1)%3];
				}
				if(x==7){
					ans=ans+y[20+(count-1)%4];
				}
				if(x==8){
					ans=ans+y[24+(count-1)%3];
				}
				if(x==9){
					ans=ans+y[27+(count-1)%4];
				}
				count=0;
			}

		}
		cout<<ans<<endl;
	}
	return 0;
}